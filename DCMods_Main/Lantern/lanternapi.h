#ifndef _LANTERNAPI_H
#define _LANTERNAPI_H

#include <ninja.h>
#ifdef __cplusplus
#include <cstddef>
#include <cstdint>
#else
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#endif

#ifdef LANTERN_API
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif
#define API typedef
#ifdef __cplusplus
extern "C" {
#endif

	typedef enum
	{
		ShaderFlags_None,

		/** \brief The shader should expect a diffuse texture. */
		ShaderFlags_Texture = 1 << 0,

		/** \brief Enables environment mapping. */
		ShaderFlags_EnvMap = 1 << 1,

		/** \brief Enables considerations for alpha blending & testing. */
		ShaderFlags_Alpha = 1 << 2,

		/** \brief Enables lighting. */
		ShaderFlags_Light = 1 << 3,

		/**
		 * \brief Enables palette blending.
		 * \sa set_diffuse_blend
		 * \sa set_specular_blend
		 * \sa set_blend
		 */
		ShaderFlags_Blend = 1 << 4,

		/** \brief Enables fog in the pixel shader. */
		ShaderFlags_Fog = 1 << 5,

		/** \brief Shader flag bitmask. Other bits are ignored. */
		ShaderFlags_Mask = 0x3F,

		/**
		 * \brief The number of shader flags.
		 * Can be considered the maximum number of shader permutations.
		 */
		ShaderFlags_Count
	} ShaderFlags;

	/**
	 * \brief The function prototype used for level-load callbacks.
	 * Level-load callbacks can be used to provide custom Lantern files.
	 * \sa pl_load_register
	 * \sa pl_load_unregister
	 * \sa sl_load_register
	 * \sa sl_load_unregister
	 */
	typedef const char* (__cdecl* lantern_load_cb)(int32_t level, int32_t act);

	/**
	 * \brief The function prototype used for material callbacks.
	 * Level-load callbacks can be used to provide custom Lantern files.
	 * \param material The material that triggered the callback.
	 * \param flags The material flags pre-combined with the global overrides.
	 * \sa material_register
	 * \sa material_unregister
	 */
	typedef bool (__cdecl* lantern_material_cb)(NJS_MATERIAL* material, uint32_t flags);

	/**
	 * \brief Register a level-load callback to provide custom PL (palette) files to the API.
	 * \param callback A pointer to a function which will act as the callback.
	 * 
	 * \sa lantern_load_cb
	 * \sa pl_load_unregister
	 * \sa sl_load_register
	 * \sa sl_load_unregister
	 */
	API void pl_load_register(lantern_load_cb callback);

	/**
	 * \brief Unregister a previously registered PL (palette) level-load callback.
	 * \param callback A pointer to the function previously registered.
	 * 
	 * \sa lantern_load_cb
	 * \sa pl_load_register
	 * \sa sl_load_register
	 * \sa sl_load_unregister
	 */
	API void pl_load_unregister(lantern_load_cb callback);

	/**
	 * \brief Register a level-load callback to provide custom SL (source light) files to the API.
	 * \param callback A pointer to the function which will act as the callback.
	 * 
	 * \sa lantern_load_cb
	 * \sa sl_load_unregister
	 * \sa pl_load_register
	 * \sa pl_load_unregister
	 */
	API void sl_load_register(lantern_load_cb callback);

	/**
	 * \brief Unregister a previously registered SL (source light) level-load callback.
	 * \param callback A pointer to the function which will act as the callback.
	 * 
	 * \sa lantern_load_cb
	 * \sa pl_load_register
	 * \sa pl_load_unregister
	 */
	API void sl_load_unregister(lantern_load_cb callback);

	/**
	 * \brief Register a material callback.
	 * Material callbacks can be used to apply parameters when a specific material is encountered.
	 * \param materials An array of pointers to \c NJS_MATERIAL which will trigger the event.
	 * \param length Length of \p materials
	 * \param callback Pointer to the function which will act as the callback.
	 * 
	 * \sa lantern_material_cb
	 * \sa material_unregister
	 */
	API void material_register(NJS_MATERIAL const* const* materials, size_t length, lantern_material_cb callback);

	/**
	 * \brief Unregisters a previously registered material callback.
	 * \param materials The array used to register the callback.
	 * \param length Length of \p materials
	 * \param callback Pointer to the function which was previously registered.
	 * 
	 * \sa lantern_material_cb
	 * \sa material_register
	 */
	API void material_unregister(NJS_MATERIAL const* const* materials, size_t length, lantern_material_cb callback);

	/**
	 * \brief Permanently add or remove material flags to be used during the next draw call.
	 * \param flags The flags to add or remove.
	 * \param add If \c true, \p flags will be added to any currently active flags (|= flags).
	 * If \c false, they will be removed (&= ~flags).
	 * \sa ShaderFlags
	 */
	API void set_shader_flags(uint32_t flags, bool add);

	/**
	 * \brief Enables or disables specular lighting for landtables (stage geometry).
	 */
	API void allow_landtable_specular(bool allow);

	/**
	 * \brief Enables or disables vertex colors for "objects" (characters, enemies, etc)
	 */
	API void allow_object_vcolor(bool allow);

	/**
	 * \brief Forces shader input diffuse color to white.
	 */
	API void use_default_diffuse(bool use);

	/**
	 * \brief Temporarily (optionally permanently) sets the diffuse palette index.
	 * \param n The diffuse palette index to use.
	 * \param permanent If \c true, does not reset after the next draw call.
	 * The diffuse index will remain \p n until something else in the pipeline changes it.
	 * 
	 * \sa set_specular
	 * \sa get_diffuse
	 */
	API void set_diffuse(int32_t n, bool permanent);

	/**
	 * \brief Temporarily (optionally permanently) sets the specular palette index.
	 * \param n The specular palette index to use.
	 * \param permanent If \c true, does not reset after the next draw call.
	 * The specular index will remain \p n until something else in the pipeline changes it.
	 * 
	 * \sa set_diffuse
	 * \sa get_specular
	 */
	API void set_specular(int32_t n, bool permanent);

	/**
	 * \brief Enables shader input diffuse color override set by \c diffuse_override_rgb
	 * \sa diffuse_override_rgb
	 */
	API void diffuse_override(bool enable);
	/**
	 * \brief Sets the shader input diffuse override color.
	 * This replaces the input material and/or vertex color unconditionally.
	 * \sa diffuse_override
	 */
	API void diffuse_override_rgb(float r, float g, float b);

	/**
	 * \brief Gets the currently set diffuse index.
	 * \sa set_diffuse
	 */
	API int32_t get_diffuse(void);

	/**
	 * \brief Gets the currently set specular index.
	 * \sa set_specular
	 */
	API int32_t get_specular(void);

	/**
	 * \brief Enable blending from a source diffuse
	 * index to a destination diffuse index.
	 *
	 * \param src
	 * Source index in the range -1 to 7.
	 * -1 applies to all source indices.
	 *
	 * \param dest
	 * Destination index in the range -1 to 7.
	 * -1 disables blending for the specified source index.
	 */
	API void set_diffuse_blend(int32_t src, int32_t dest);

	/**
	 * \brief Enable blending from a source specular
	 * index to a destination specular index.
	 *
	 * \param src
	 * Source index in the range -1 to 7.
	 * -1 applies to all source indices.
	 *
	 * \param dest
	 * Destination index in the range -1 to 7.
	 * -1 disables blending for the specified source index.
	 */
	API void set_specular_blend(int32_t src, int32_t dest);

	/**
	 * \brief Sets blend indices for diffuse and specular simultaneously.
	 * \sa set_diffuse_blend
	 * \sa set_specular_blend
	 */
	API void set_blend(int32_t src, int32_t dest);

	/**
	 * \brief Returns the current destination blend index
	 * for the specified source diffuse index.
	 *
	 * \param src Source index in the range 0 to 7.
	 * Values outside this range will always return -1.
	 *
	 * \return A value in the range 0 to 7, or -1 if not set.
	 */
	API int32_t get_diffuse_blend(int32_t src);

	/**
	 * \brief Returns the current destination blend index
	 * for the specified source specular index.
	 *
	 * \param src Source index in the range 0 to 7.
	 * Values outside this range will always return -1.
	 *
	 * \return A value in the range 0 to 7, or -1 if not set.
	 */
	API int32_t get_specular_blend(int32_t src);

	/**
	 * \brief Set diffuse index blending factor.
	 * \param factor A blending factor in the range 0.0f to 1.0f.
	 * Behavior of values outside this range is undefined.
	 */
	API void set_diffuse_blend_factor(float factor);

	/**
	 * \brief Set specular index blending factor.
	 * \param factor A blending factor in the range 0.0f to 1.0f.
	 * Behavior of values outside this range is undefined.
	 */
	API void set_specular_blend_factor(float factor);

	/**
	 * \brief Gets the diffuse blend factor set by set_diffuse_blend_factor.
	 */
	API float get_diffuse_blend_factor(void);

	/**
	 * \brief Gets the specular blend factor set by set_specular_blend_factor.
	 */
	API float get_specular_blend_factor(void);

	/**
	 * \brief Set diffuse and specular index blending factor simultaneously.
	 * \param factor A blending factor in the range 0.0f to 1.0f.
	 * Behavior of values outside this range is undefined.
	 * 
	 * \sa set_diffuse_blend_factor
	 * \sa set_specular_blend_factor
	 */
	API void set_blend_factor(float factor);

	/**
	 * \brief Sets the shader alpha rejection threshold.
	 * Note that this is separate from the one used by the
	 * fixed-function pipeline.
	 * 
	 * \param threshold A threshold in the range 0.0f to 1.0f. The default value is (\c 16.0f / \c 255.0f).
	 * Behavior of values outside this range is undefined.
	 * \param permanent If \c true, the value will persist after the next draw call.
	 * If \c false, the value will reset to the last permanent value.
	 */
	API void set_alpha_reject(float threshold, bool permanent);

	/**
	 * \brief Gets the shader alpha rejection threshold. The default value is (\c 16.0f / \c 255.0f).
	 * Note that this is separate from the one used by the
	 * fixed-function pipeline.
	 * 
	 * \sa set_alpha_reject
	 */
	API float get_alpha_reject(void);

#ifdef __cplusplus
}
#endif

#endif /* _LANTERNAPI_H */
