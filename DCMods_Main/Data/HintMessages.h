#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//Original messages

__int16 ChaoGardenMessages_Japanese_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Japanese_0_Text[] = {
	{ "\t\202\261\202\261\202\315\203\140\203\203\203\111\203\113\201\133\203\146\203\223\201\102", 120 } /* "\tここはチャオガーデン。" */,
	{ "\t\203\217\201\133\203\213\203\150\202\305\202\335\202\302\202\257\202\275\203\136\203\175\203\123\202\360\n\t\202\261\202\261\202\311\202\340\202\301\202\304\202\255\202\352\202\316\201\101\203\140\203\203\203\111\202\252\222\141\220\266\202\267\202\351\202\355", 360 } /* "\tワールドでみつけたタマゴを\n\tここにもってくれば、チャオが誕生するわ" */,
	{ 0 }
};

__int16 ChaoGardenMessages_Japanese_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Japanese_1_Text[] = {
	{ "\t\216\131\202\334\202\352\202\304\202\251\202\347\201\101\202\265\202\316\202\347\202\255\202\275\202\302\202\306\n\t\203\136\203\175\203\123\202\315\216\251\221\122\202\311\202\251\202\246\202\351\202\257\202\307\201\101", 180 } /* "\t産まれてから、しばらくたつと\n\tタマゴは自然にかえるけど、" */,
	{ "\t\202\240\202\310\202\275\202\252\220\107\202\352\202\304\202\251\202\246\202\267\202\261\202\306\202\340\202\305\202\253\202\351\202\314\201\102", 180 } /* "\tあなたが触れてかえすこともできるの。" */,
	{ "\t\202\251\202\246\202\265\225\373\202\311\202\346\202\301\202\304\201\101\203\140\203\203\203\111\202\314\220\253\212\151\202\252\n\t\225\317\202\355\202\351\202\355\201\102\202\242\202\353\202\242\202\353\216\216\202\265\202\304\202\335\202\304\201\102", 360 } /* "\tかえし方によって、チャオの性格が\n\t変わるわ。いろいろ試してみて。" */,
{ 0 }
};

__int16 ChaoGardenMessages_Japanese_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Japanese_2_Text[] = {
	{ "\t\217\254\223\256\225\250\202\360\203\140\203\203\203\111\202\311\216\350\223\156\202\267\202\306\201\101\203\140\203\203\203\111\202\252\n\t\225\317\211\273\202\267\202\351\202\355\201\102\202\242\202\353\202\242\202\353\202\275\202\337\202\265\202\304\202\313\201\111", 360 } /* "\t小動物をチャオに手渡すと、チャオが\n\t変化するわ。いろいろためしてね！" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Japanese_3_Text[] = {
	{ "\t\201\167\203\107\203\124\202\314\202\240\202\260\225\373\201\170", 0 } /* "\t『エサのあげ方』" */,
	{ "\t\203\140\203\203\203\111\202\252\221\345\215\104\202\253\202\310\203\107\203\124\202\315\201\101\n\t\226\330\202\360\202\344\202\267\202\351\202\306\227\216\202\277\202\304\202\253\202\334\202\267\201\102", 0 } /* "\tチャオが大好きなエサは、\n\t木をゆすると落ちてきます。" */,
	{ "\t\227\150\202\347\202\267\216\236\202\315\201\101\226\330\202\314\221\117\202\305\n\t\203\101\203\116\203\126\203\207\203\223\203\173\203\136\203\223\202\306", 0 } /* "\t揺らす時は、木の前で\n\tアクションボタンと" */,
	{ "\t\203\122\203\223\203\147\203\215\201\133\203\213\203\130\203\145\203\102\203\142\203\116\202\305\202\267\201\102", 0 } /* "\tコントロールスティックです。" */,
	{ "\t\203\140\203\203\203\111\202\314\203\107\203\124\202\311\202\315\202\242\202\353\202\361\202\310\214\370\211\312\202\252\n\t\202\240\202\350\202\334\202\267\201\102\202\346\202\255\212\317\216\100\202\265\202\304\202\335\202\304\202\255\202\276\202\263\202\242\201\102", 0 } /* "\tチャオのエサにはいろんな効果が\n\tあります。よく観察してみてください。" */,
	{ "\t\201\167\203\140\203\203\203\111\202\314\202\323\202\342\202\265\225\373\201\170", 0 } /* "\t『チャオのふやし方』" */,
	{ "\t\203\140\203\203\203\111\202\314\202\334\202\355\202\350\202\311\202\275\202\255\202\263\202\361\202\314\211\324\202\252\215\347\202\255\202\306\n\t\202\273\202\314\203\140\203\203\203\111\202\252\224\311\220\102\212\372\201\151\202\315\202\361\202\265\202\345\202\255\202\253\201\152\202\311", 0 } /* "\tチャオのまわりにたくさんの花が咲くと\n\tそのチャオが繁殖期（はんしょくき）に" */,
	{ "\t\202\310\202\301\202\275\203\124\203\103\203\223\202\305\202\267\201\102\221\274\202\314\203\140\203\203\203\111\202\306\n\t\210\352\217\217\202\311\202\310\202\352\202\316\201\101\203\136\203\175\203\123\202\360\216\131\202\336\202\251\202\340\201\143\201\110", 0 } /* "\tなったサインです。他のチャオと\n\t一緒になれば、タマゴを産むかも…？" */,
	{ "\t\201\167\215\305\214\343\202\311\202\320\202\306\202\261\202\306\201\170", 0 } /* "\t『最後にひとこと』" */,
	{ "\t\202\320\202\306\202\302\202\314\203\113\201\133\203\146\203\223\202\305\201\101\n\t\203\140\203\203\203\111\202\252\202\127\225\103\210\310\217\343\202\311\221\235\202\246\202\351\202\306\201\101", 0 } /* "\tひとつのガーデンで、\n\tチャオが８匹以上に増えると、" */,
	{ "\t\224\336\202\347\202\315\201\101\202\242\202\262\202\261\202\277\202\252\210\253\202\255\202\310\202\351\202\346\202\244\202\305\202\267\201\102", 0 } /* "\t彼らは、いごこちが悪くなるようです。" */,
	{ "\t\203\113\201\133\203\146\203\223\202\252\203\114\203\205\203\105\203\116\203\143\202\311\202\310\202\351\202\306\201\101\n\t\202\331\202\251\202\314\203\113\201\133\203\146\203\223\202\311\210\332\202\351\203\140\203\203\203\111\202\340\202\242\202\334\202\267\201\102", 0 } /* "\tガーデンがキュウクツになると、\n\tほかのガーデンに移るチャオもいます。" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Japanese_4_Text[] = {
	{ "\t\201\167\203\217\201\133\203\166\203\172\201\133\203\213\201\170", 0 } /* "\t『ワープホール』" */,
	{ "\t\202\261\202\352\202\315\203\217\201\133\203\166\203\172\201\133\203\213\202\305\202\267\201\102\n\t\210\352\223\170\215\163\202\301\202\275\202\261\202\306\202\314\202\240\202\351\203\113\201\133\203\146\203\223\202\310\202\347\201\101", 0 } /* "\tこれはワープホールです。\n\t一度行ったことのあるガーデンなら、" */,
	{ "\t\203\122\203\122\202\251\202\347\212\310\222\120\202\311\202\242\202\255\202\261\202\306\202\252\202\305\202\253\202\334\202\267\201\102\n\t\203\140\203\203\203\111\202\342\203\136\203\175\203\123\202\340\230\101\202\352\202\304\215\163\202\257\202\334\202\267\201\102", 0 } /* "\tココから簡単にいくことができます。\n\tチャオやタマゴも連れて行けます。" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Japanese_5_Text[] = {
	{ "\t\201\167\202\250\202\310\202\334\202\246\203\175\203\126\201\133\203\223\201\170", 0 } /* "\t『おなまえマシーン』" */,
	{ "\t\202\261\202\352\202\315\203\140\203\203\203\111\202\314\226\274\221\117\202\360\223\157\230\136\202\267\202\351\n\t\203\175\203\126\201\133\203\223\202\305\202\267\201\102", 0 } /* "\tこれはチャオの名前を登録する\n\tマシーンです。" */,
	{ "\t\203\140\203\203\203\111\202\360\202\276\202\242\202\304\220\324\202\242\203\173\203\136\203\223\202\314\217\343\202\311\n\t\217\346\202\351\202\306\213\116\223\256\202\265\202\334\202\267\201\102", 0 } /* "\tチャオをだいて赤いボタンの上に\n\t乗ると起動します。" */,
	{ "\t\203\140\203\203\203\111\202\311\202\251\202\355\202\242\202\242\226\274\221\117\202\360\202\302\202\257\202\304\202\240\202\260\202\304\202\313\201\102", 0 } /* "\tチャオにかわいい名前をつけてあげてね。" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Japanese_6_Text[] = {
	{ "\t\201\155\203\140\203\203\203\111\203\130\203\136\203\127\203\101\203\200\201\156\202\326\202\346\202\244\202\261\202\273\201\111\n\t\201\155\203\140\203\203\203\111\203\214\201\133\203\130\201\156\212\112\215\303\222\206\201\111\201\111", 0 } /* "\t［チャオスタジアム］へようこそ！\n\t［チャオレース］開催中！！" */,
	{ 0 }
};

__int16 ChaoGardenMessages_English_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_0_Text[] = {
	{ "\aThis is the Chao Garden.", 120 } /* "\aThis is the Chao Garden." */,
	{ "\aIf you bring the eggs you find all\nover the world, a Chao will be born.", 360 } /* "\aIf you bring the eggs you find all\nover the world, a Chao will be born." */,
	{ 0 }
};

__int16 ChaoGardenMessages_English_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_1_Text[] = {
	{ "\aThe egg will hatch\nnaturally after a while.", 120 } /* "\aThe egg will hatch\nnaturally after a while." */,
	{ "\aYou can also help the egg to hatch.", 120 } /* "\aYou can also help the egg to hatch." */,
	{ "\aDepending on how you hatch the egg,", 120 } /* "\aDepending on how you hatch the egg," */,
	{ "\athe characteristics of\nthe Chao will be affected.", 120 } /* "\athe characteristics of\nthe Chao will be affected." */,
	{ 0 }
};

__int16 ChaoGardenMessages_English_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_2_Text[] = {
	{ "\aIf you give a Chao a small animal,\nthe Chao changes.", 150 } /* "\aIf you give a Chao a small animal,\nthe Chao changes." */,
	{ "\aTry experimenting using\ndifferent animals.", 150 } /* "\aTry experimenting using\ndifferent animals." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_3_Text[] = {
	{ "\a'Feeding your Chao'", 0 } /* "\a'Feeding your Chao'" */,
	{ "\aChao love to eat fruits.\nYou can get them by shaking trees.", 0 } /* "\aChao love to eat fruits.\nYou can get them by shaking trees." */,
	{ "\aWhen you want to shake a tree,", 0 } /* "\aWhen you want to shake a tree," */,
	{ "\ause the action button\nand +Control Pad.", 0 } /* "\ause the action button\nand +Control Pad." */,
	{ "\aDifferent Chao fruits\nhave different effects.", 0 } /* "\aDifferent Chao fruits\nhave different effects." */,
	{ "\aTry giving them different fruits.", 0 } /* "\aTry giving them different fruits." */,
	{ "\a'How to Breed your Chao'", 0 } /* "\a'How to Breed your Chao'" */,
	{ "\aWhen flowers start to bloom around\nthe Chao, it is ready for breeding.", 0 } /* "\aWhen flowers start to bloom around\nthe Chao, it is ready for breeding." */,
	{ "\aIf you put it with other Chao,", 0 } /* "\aIf you put it with other Chao," */,
	{ "\ayou may get lucky and\nit may lay an egg.", 0 } /* "\ayou may get lucky and\nit may lay an egg." */,
	{ "\a'Extra Advice'", 0 } /* "\a'Extra Advice'" */,
	{ "\aIf you put more than\n8 Chao in one garden,", 0 } /* "\aIf you put more than\n8 Chao in one garden," */,
	{ "\athey start to feel crowded.", 0 } /* "\athey start to feel crowded." */,
	{ "\aIf it gets too crowded, some Chao\nstart moving to other gardens.", 0 } /* "\aIf it gets too crowded, some Chao\nstart moving to other gardens." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_4_Text[] = {
	{ "\a'Warp Hole'", 0 } /* "\a'Warp Hole'" */,
	{ "\aThis is a Warp Hole.\nYou can go easily to gardens", 0 } /* "\aThis is a Warp Hole.\nYou can go easily to gardens" */,
	{ "\ayou have previously been to.", 0 } /* "\ayou have previously been to." */,
	{ "\aYou may bring Chao and\neggs with you, too.", 0 } /* "\aYou may bring Chao and\neggs with you, too." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_5_Text[] = {
	{ "\a'Name Machine'", 0 } /* "\a'Name Machine'" */,
	{ "\aThis is a machine that\nrecords Chao's name.", 0 } /* "\aThis is a machine that\nrecords Chao's name." */,
	{ "\aGrab Chao and place Chao \non the red button to start.", 0 } /* "\aGrab Chao and place Chao \non the red button to start." */,
	{ "\aGive Chao a cute name, OK?", 0 } /* "\aGive Chao a cute name, OK?" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_6_Text[] = {
	{ "\aWelcome to Chao Stadium!\nHome of the Chao Races!!", 0 } /* "\aWelcome to Chao Stadium!\nHome of the Chao Races!!" */,
	{ 0 }
};


__int16 ChaoGardenMessages_French_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_French_0_Text[] = {
	{ "\aVoici le Jardin de Chao.", 120 } /* "\aVoici le Jardin de Chao." */,
	{ "\aSi vous amenez les \234ufs que vous\ntrouvez, un Chao na\356tra.", 360 } /* "\aSi vous amenez les œufs que vous\ntrouvez, un Chao naîtra." */,
	{ 0 }
};

__int16 ChaoGardenMessages_French_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_French_1_Text[] = {
	{ "\aL'\234uf \351clorera tout seul\napr\350s un temps.", 120 } /* "\aL'œuf éclorera tout seul\naprès un temps." */,
	{ "\aVous pouvez aussi l'aider \340 \351clorer.", 120 } /* "\aVous pouvez aussi l'aider à éclorer." */,
	{ "\aSelon la fa\347on dont vous\nfaites \351clorer l'\234uf,", 120 } /* "\aSelon la façon dont vous\nfaites éclorer l'œuf," */,
	{ "\ales caract\351ristiques du\nChao changeront.", 120 } /* "\ales caractéristiques du\nChao changeront." */,
	{ 0 }
};

__int16 ChaoGardenMessages_French_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_French_2_Text[] = {
	{ "\aSi vous donnez une petite b\352te \340 un\nChao, le Chao changera.", 150 } /* "\aSi vous donnez une petite bête à un\nChao, le Chao changera." */,
	{ "\aEssayez avec des animaux\ndiff\351rents.", 150 } /* "\aEssayez avec des animaux\ndifférents." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_3_Text[] = {
	{ "\a'Donner \340 manger \340 votre Chao'", 0 } /* "\a'Donner à manger à votre Chao'" */,
	{ "\aLes Chao adorent manger des fruits.\nSecouez les arbres pour en trouver.", 0 } /* "\aLes Chao adorent manger des fruits.\nSecouez les arbres pour en trouver." */,
	{ "\aQuand vous voulez secouer un arbre,", 0 } /* "\aQuand vous voulez secouer un arbre," */,
	{ "\autilisez le bouton d'Action\net une Touche Directionelle.", 0 } /* "\autilisez le bouton d'Action\net une Touche Directionelle." */,
	{ "\aLes fruits diff\351rents\nproduisent des effets diff\351rents.", 0 } /* "\aLes fruits différents\nproduisent des effets différents." */,
	{ "\aEssayez de les donner\ndes fruits diff\351rents.", 0 } /* "\aEssayez de les donner\ndes fruits différents." */,
	{ "\a'Comment faire l'\351levage des Chao'", 0 } /* "\a'Comment faire l'élevage des Chao'" */,
	{ "\aQuand des fleurs poussent autour\ndu Chao, il est pr\352t \340 reproduire.", 0 } /* "\aQuand des fleurs poussent autour\ndu Chao, il est prêt à reproduire." */,
	{ "\aSi vous le mettez \navec un autre Chao,", 0 } /* "\aSi vous le mettez \navec un autre Chao," */,
	{ "\avous aurez peut-\352tre la chance\nqu'il produira un \234uf.", 0 } /* "\avous aurez peut-être la chance\nqu'il produira un œuf." */,
	{ "\a'Conseils Suppl\351mentaires'", 0 } /* "\a'Conseils Supplémentaires'" */,
	{ "\aSi vous mettez plus de\n8 Chao dans un jardin,", 0 } /* "\aSi vous mettez plus de\n8 Chao dans un jardin," */,
	{ "\ails commencent \340 \nse sentir mal \340 l'aise.", 0 } /* "\ails commencent à \nse sentir mal à l'aise." */,
	{ "\aS'il y a trop de monde, certains Chao\npartiront vers d'autres jardins.", 0 } /* "\aS'il y a trop de monde, certains Chao\npartiront vers d'autres jardins." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_4_Text[] = {
	{ "\a'Warp Hole'", 0 } /* "\a'Warp Hole'" */,
	{ "\aCeci est un Warp Hole. Vous pouvez\nfacilement passer dans les jardins", 0 } /* "\aCeci est un Warp Hole. Vous pouvez\nfacilement passer dans les jardins" */,
	{ "\aque vous avez d\351j\340 visit\351s.", 0 } /* "\aque vous avez déjà visités." */,
	{ "\aVous pouvez emmener des Chao et\ndes \234ufs avec vous.", 0 } /* "\aVous pouvez emmener des Chao et\ndes œufs avec vous." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_5_Text[] = {
	{ "\aMachine \340 nommer", 0 } /* "\aMachine à nommer" */,
	{ "\aC'est une machine qui enregistre \nle nom d'un Chao.", 0 } /* "\aC'est une machine qui enregistre \nle nom d'un Chao." */,
	{ "\aSaisir le Chao et placer ce Chao \nsur la touche rouge pour commencer.", 0 } /* "\aSaisir le Chao et placer ce Chao \nsur la touche rouge pour commencer." */,
	{ "\aDonner au Chao un nom sympa, OK ?", 0 } /* "\aDonner au Chao un nom sympa, OK ?" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_6_Text[] = {
	{ "\aBienvenue au Stade Chao\no\371 se passent les Courses Chao!!", 0 } /* "\aBienvenue au Stade Chao\noù se passent les Courses Chao!!" */,
	{ 0 }
};

__int16 ChaoGardenMessages_Spanish_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Spanish_0_Text[] = {
	{ "\aJard\355n Chao.", 120 } /* "\aJardín Chao." */,
	{ "\aSi traes los huevos que encuentres\npor el mundo, un Chao nacer\341.", 360 } /* "\aSi traes los huevos que encuentres\npor el mundo, un Chao nacerá." */,
	{ 0 }
};

__int16 ChaoGardenMessages_Spanish_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Spanish_1_Text[] = {
	{ "\aEl huevo se romper\341 por si solo\ndespu\351s de un rato.", 120 } /* "\aEl huevo se romperá por si solo\ndespués de un rato." */,
	{ "\aTambi\351n puedes ayudar a romperlo.", 120 } /* "\aTambién puedes ayudar a romperlo." */,
	{ "\aSeg\372n como lo rompas,", 120 } /* "\aSegún como lo rompas," */,
	{ "\aChao tendr\341 diferentes\ncaracter\355sticas.", 120 } /* "\aChao tendrá diferentes\ncaracterísticas." */,
	{ 0 }
};

__int16 ChaoGardenMessages_Spanish_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_Spanish_2_Text[] = {
	{ "\aSi a Chao le das un animalito,\nel Chao cambiar\341.", 150 } /* "\aSi a Chao le das un animalito,\nel Chao cambiará." */,
	{ "\aPrueba con diferentes\nanimalitos.", 150 } /* "\aPrueba con diferentes\nanimalitos." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Spanish_3_Text[] = {
	{ "\a'C\363mo alimentar a tu Chao'", 0 } /* "\a'Cómo alimentar a tu Chao'" */,
	{ "\aA Chao le encantan las frutas.\nCons\355guelas agitando los \341rboles.", 0 } /* "\aA Chao le encantan las frutas.\nConsíguelas agitando los árboles." */,
	{ "\aPara agitar un \341rbol,", 0 } /* "\aPara agitar un árbol," */,
	{ "\autiliza el bot\363n acci\363n\ny el bot\363n anal\363gico.", 0 } /* "\autiliza el botón acción\ny el botón analógico." */,
	{ "\aCada fruta tiene\nun efecto diferente.", 0 } /* "\aCada fruta tiene\nun efecto diferente." */,
	{ "\aPrueba con diferentes frutas.", 0 } /* "\aPrueba con diferentes frutas." */,
	{ "\a'C\363mo hacer que tu Chao cr\355e'", 0 } /* "\a'Cómo hacer que tu Chao críe'" */,
	{ "\aCuando las flores brotan alrededor\nde Chao, est\341 preparado para criar.", 0 } /* "\aCuando las flores brotan alrededor\nde Chao, está preparado para criar." */,
	{ "\aSi lo pones junto a otro Chao,", 0 } /* "\aSi lo pones junto a otro Chao," */,
	{ "\apuede que tengas suerte\ny pongan un huevo.", 0 } /* "\apuede que tengas suerte\ny pongan un huevo." */,
	{ "\a'Consejos'", 0 } /* "\a'Consejos'" */,
	{ "\aSi pones a m\341s de\n8 Chao en un jard\355n,", 0 } /* "\aSi pones a más de\n8 Chao en un jardín," */,
	{ "\aempezar\341n a sentirse inc\363modos.", 0 } /* "\aempezarán a sentirse incómodos." */,
	{ "\aEntonces algunos Chao\n empezar\341n a irse a otro jard\355n.", 0 } /* "\aEntonces algunos Chao\n empezarán a irse a otro jardín." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Spanish_4_Text[] = {
	{ "\a'Warp Hole'", 0 } /* "\a'Warp Hole'" */,
	{ "\aEsto es un Teletransportador.\nTe permite ir a los jardines", 0 } /* "\aEsto es un Teletransportador.\nTe permite ir a los jardines" */,
	{ "\adonde ya has estado antes.", 0 } /* "\adonde ya has estado antes." */,
	{ "\aTambi\351n puedes llevar Chao\ny huevos contigo.", 0 } /* "\aTambién puedes llevar Chao\ny huevos contigo." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Spanish_5_Text[] = {
	{ "\aPonle nombre a la m\341quina.", 0 } /* "\aPonle nombre a la máquina." */,
	{ "\aEsto es una m\341quina que \ngraba el nombre de Chao.", 0 } /* "\aEsto es una máquina que \ngraba el nombre de Chao." */,
	{ "\aAgarra a Chao y col\363calo \nen el bot\363n rojo para empezar.", 0 } /* "\aAgarra a Chao y colócalo \nen el botón rojo para empezar." */,
	{ "\aPonle un nombre bonito a Chao \277vale?", 0 } /* "\aPonle un nombre bonito a Chao ¿vale?" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Spanish_6_Text[] = {
	{ "\a\241Bienvenido al estadio Chao!\n\241Donde se celebran sus carreras!", 0 } /* "\a¡Bienvenido al estadio Chao!\n¡Donde se celebran sus carreras!" */,
	{ 0 }
};

__int16 ChaoGardenMessages_German_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_German_0_Text[] = {
	{ "\aDies ist der Chao Garden.", 120 } /* "\aDies ist der Chao Garden." */,
	{ "\aWenn Du alle Eier sammelst,\ndie es gibt, wird ein Chao geboren.", 360 } /* "\aWenn Du alle Eier sammelst,\ndie es gibt, wird ein Chao geboren." */,
	{ 0 }
};

__int16 ChaoGardenMessages_German_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_German_1_Text[] = {
	{ "\aAus dem Ei schl\374pft\nnach einer Weile eine Kreatur.", 120 } /* "\aAus dem Ei schlüpft\nnach einer Weile eine Kreatur." */,
	{ "\aHilf der Kreatur zu schl\374pfen.", 120 } /* "\aHilf der Kreatur zu schlüpfen." */,
	{ "\aDie Art Deiner Hilfe beeinflu\337t,", 120 } /* "\aDie Art Deiner Hilfe beeinflußt," */,
	{ "\adie Eigenschaften, mit denen\nder Chao geboren wird.", 120 } /* "\adie Eigenschaften, mit denen\nder Chao geboren wird." */,
	{ 0 }
};

__int16 ChaoGardenMessages_German_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_German_2_Text[] = {
	{ "\aWenn Du dem Chao ein\nkleines Tier gibst, \344ndert er sich.", 150 } /* "\aWenn Du dem Chao ein\nkleines Tier gibst, ändert er sich." */,
	{ "\aExperimentiere mit\nverschiedenen Tieren.", 150 } /* "\aExperimentiere mit\nverschiedenen Tieren." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_German_3_Text[] = {
	{ "\a'Die F\374tterung des Chao'", 0 } /* "\a'Die Fütterung des Chao'" */,
	{ "\aDer Chao mag Fr\374chte, die\nDu von den B\344umen sch\374ttelst.", 0 } /* "\aDer Chao mag Früchte, die\nDu von den Bäumen schüttelst." */,
	{ "\aWenn Du einen Baum sch\374tteln willst,", 0 } /* "\aWenn Du einen Baum schütteln willst," */,
	{ "\abenutze die Aktions-Taste\nund das Steuerkreuz.", 0 } /* "\abenutze die Aktions-Taste\nund das Steuerkreuz." */,
	{ "\aVerschiedene Fr\374chte haben \nauf ihn verschiedene Wirkungen.", 0 } /* "\aVerschiedene Früchte haben \nauf ihn verschiedene Wirkungen." */,
	{ "\aF\374tter ihn mit verschiedenen \nFr\374chten.", 0 } /* "\aFütter ihn mit verschiedenen \nFrüchten." */,
	{ "\a'Z\374chte Deinen eigenen Chao'", 0 } /* "\a'Züchte Deinen eigenen Chao'" */,
	{ "\aWenn Blumen um den Chao\naufbl\374hen, ist er zuchtreif.", 0 } /* "\aWenn Blumen um den Chao\naufblühen, ist er zuchtreif." */,
	{ "\aPaare ihn mit einem anderen Chao,", 0 } /* "\aPaare ihn mit einem anderen Chao," */,
	{ "\aund wenn Du Gl\374ck hast\nlegt er ein Ei.", 0 } /* "\aund wenn Du Glück hast\nlegt er ein Ei." */,
	{ "\a'Extra Tip'", 0 } /* "\a'Extra Tip'" */,
	{ "\aWenn Du mehr als\n8 Chao in einen Garten einquartierst,", 0 } /* "\aWenn Du mehr als\n8 Chao in einen Garten einquartierst," */,
	{ "\af\374hlen sie sich eingeengt.", 0 } /* "\afühlen sie sich eingeengt." */,
	{ "\aWenn es zu eng wird, werden\neinige Chao umziehen'.", 0 } /* "\aWenn es zu eng wird, werden\neinige Chao umziehen'." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_German_4_Text[] = {
	{ "\a'Warp Hole'", 0 } /* "\a'Warp Hole'" */,
	{ "\aDies ist ein Warp Hole.\nSo kannst Du einfach in G\344rten gehen,", 0 } /* "\aDies ist ein Warp Hole.\nSo kannst Du einfach in Gärten gehen," */,
	{ "\adie Du schon vorher aufgesucht hast.", 0 } /* "\adie Du schon vorher aufgesucht hast." */,
	{ "\aDu kannst den Chao,\nund auch seine Eier mitnehmen.", 0 } /* "\aDu kannst den Chao,\nund auch seine Eier mitnehmen." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_German_5_Text[] = {
	{ "\aNamensmaschine", 0 } /* "\aNamensmaschine" */,
	{ "\aDies ist eine Maschine, \ndie Chaos Namen aufzeichnet.", 0 } /* "\aDies ist eine Maschine, \ndie Chaos Namen aufzeichnet." */,
	{ "\aNimm Chao und setze ihn auf den \nrechten Knoph, um zu beginnen", 0 } /* "\aNimm Chao und setze ihn auf den \nrechten Knoph, um zu beginnen" */,
	{ "\aGib Chao einen netten Namen, okay ?", 0 } /* "\aGib Chao einen netten Namen, okay ?" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_German_6_Text[] = {
	{ "\aWillkommen im Chao Stadion!\nHier finden die Chao Rennen statt", 0 } /* "\aWillkommen im Chao Stadion!\nHier finden die Chao Rennen statt" */,
	{ 0 }
};

//Custom messages

HintText_Text ChaoGardenMessages_English_7_Text[] = {
	{ "\a'Chao Race'", 0 },
	{ "\a\x81\xA1Let your Chao enter in\na race, and aim for the goal!", 0 },
	{ "\a\x81\xA1In Chao Race -Jewel-\nIf you come in 1st place", 0 },
	{ "\ayou get a Jewel Pendant.", 0 },
	{ "\x81\xA1\aCheer for your Chao! When you cheer \nfor your Chao when it flashes,", 0 },
	{ "\ait will run a little faster.\nCheering: ABXY Buttons", 0 },
	{ "\x81\xA1\aMove the triangular cursor to move\nthe camera angle and select the Chao", 0 },
	{ "\ayou wish to watch.", 0 },
	{ "\aChanging camera angles:\nDirectional Buttons.", 0 },
	{ 0 }
};

HintText_Text ChaoGardenMessages_Japanese_7_Text[] = {
	{ "\t\201\155\203\140\203\203\203\111\203\214\201\133\203\130\201\156", 0 } /* "\t［チャオレース］" */,
	{ "\t\201\241\203\140\203\203\203\111\202\314\210\347\202\304\202\275\224\134\227\315\202\360\216\147\202\301\202\304\201\101\n\t\203\123\201\133\203\213\202\334\202\305\202\314\221\254\202\263\202\360\213\243\202\244\203\214\201\133\203\130\202\305\202\267\201\102", 0 } /* "\t■チャオの育てた能力を使って、\n\tゴールまでの速さを競うレースです。" */,
	{ "\t\201\241\201\155\203\140\203\203\203\111\203\214\201\133\203\130\201\140\203\127\203\205\203\107\203\213\201\140\201\156\202\305\202\315\201\101\n\t\202\120\210\312\202\305\203\123\201\133\203\213\202\267\202\351\202\306\201\101 ", 0 } /* "\t■［チャオレース～ジュエル～］では、\n\t１位でゴールすると、 " */,
	{ "\t\203\127\203\205\203\107\203\213\203\171\203\223\203\137\203\223\203\147\202\252\202\340\202\347\202\246\202\334\202\267\201\102", 0 } /* "\tジュエルペンダントがもらえます。" */,
	{ "\t\201\241\203\140\203\203\203\111\202\360\220\272\202\342\212\171\212\355\202\305\211\236\211\207\202\305\202\253\202\334\202\267\201\102\n\t\203\140\203\203\203\111\202\252\214\365\202\301\202\275\216\236\202\311\211\236\211\207\202\267\202\351\202\306\201\101", 0 } /* "\t■チャオを声や楽器で応援できます。\n\tチャオが光った時に応援すると、" */,
	{ "\t\217\255\202\265\202\276\202\257\203\137\203\142\203\126\203\205\202\265\202\334\202\267\201\102\n\t\211\236\211\207\201\106\202\140\202\141\202\167\202\170\203\173\203\136\203\223\201\155\213\244\222\312\201\156", 0 } /* "\t少しだけダッシュします。\n\t応援：ＡＢＸＹボタン［共通］" */,
	{ "\t\201\241\203\112\203\201\203\211\220\330\221\326\202\305\223\252\217\343\202\314\216\117\212\160\203\175\201\133\203\116\202\360\n\t\210\332\223\256\202\263\202\271\201\101\214\251\202\275\202\242\203\140\203\203\203\111\202\360\221\111\202\327\202\334\202\267\201\102", 0 } /* "\t■カメラ切替で頭上の三角マークを\n\t移動させ、見たいチャオを選べます。" */,
	{ "\t\203\112\203\201\203\211\220\330\221\326\201\106\225\373\214\374\203\173\203\136\203\223", 0 } /* "\tカメラ切替：方向ボタン" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_German_7_Text[] = {
	{ "\aLa\337 Deinen Chao beim Rennen\nzur Ziellinie st\374rmen!", 0 } /* "\aLaß Deinen Chao beim Rennen\nzur Ziellinie stürmen!" */,
	{ "\aWenn Du im Chao Rennen -Jewel-\nden ersten Plaz belegst", 0 } /* "\aWenn Du im Chao Rennen -Jewel-\nden ersten Plaz belegst" */,
	{ "\agewinnst Du einen Juwelen Anh\344nger.", 0 } /* "\agewinnst Du einen Juwelen Anhänger." */,
	{ "\aFeuer den Chao an, und\ner leuchtet auf,", 0 } /* "\aFeuer den Chao an, und\ner leuchtet auf," */,
	{ "\aund wird schneller rennen.\nZum Anfeuern: ABXY Tasten", 0 } /* "\aund wird schneller rennen.\nZum Anfeuern: ABXY Tasten" */,
	{ "\aBewege den Pfeil, und suche\neinen Chao mit neuem Blickwinkel aus", 0 } /* "\aBewege den Pfeil, und suche\neinen Chao mit neuem Blickwinkel aus" */,
	{ "\aden Du anfeuern willst.", 0 } /* "\aden Du anfeuern willst." */,
	{ "\aVer\344nderung des Kamerawinkels:\nSteuerkreuz", 0 } /* "\aVeränderung des Kamerawinkels:\nSteuerkreuz" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_Spanish_7_Text[] = {
	{ "\a'Carrera de Chao'", 0 } /* "\a'Carrera de Chao'" */,
	{ "\a\241Deja a tu Chao participar en\nuna carrera y luchar por la victoria!", 0 } /* "\aDeja a tu Chao participar en\nuna carrera y luchar por la victoria!" */,
	{ "\a\241En una carrera de Chao\nsi llegas en primer lugar", 0 } /* "\aEn una carrera de Chao\nsi llegas en primer lugar" */,
	{ "\aganar\341s un Colgante!.", 0 } /* "\aganarás un Colgante!." */,
	{ "\a\241Anima a tu Chao! Si animas\na tu Chao cuando destella,", 0 } /* "\aAnima a tu Chao! Si animas\na tu Chao cuando destella," */,
	{ "\acorrer\341 m\341s r\341pido.\nara animar pulsa los botones ABXY", 0 } /* "\acorrerá más rápido.\nara animar pulsa los botones ABXY" */,
	{ "\aMueve el cursor triangular para\ncambiar el \341ngulo de la c\341mara", 0 } /* "\aMueve el cursor triangular para\ncambiar el ángulo de la cámara" */,
	{ "\ay seleccionar el Chao\nque quieres ver.", 0 } /* "\ay seleccionar el Chao\nque quieres ver." */,
	{ "\aCambio del \341ngulo de la c\341mara:\nBot\363n direccional", 0 } /* "\aCambio del ángulo de la cámara:\nBotón direccional" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_7_Text[] = {
	{ "\a'Course Chao'", 0 } /* "\a'Course Chao'" */,
	{ "\aEntrez votre Chao en\ncourse, et droit vers l'arriv\351e!", 0 } /* "\aEntrez votre Chao en\ncourse, et droit vers l'arrivée!" */,
	{ "\aEn course Chao -Joyau-\nsi vous finissez en 1\350re position", 0 } /* "\aEn course Chao -Joyau-\nsi vous finissez en 1ère position" */,
	{ "\avous recevrez un pendentif de Joyau.", 0 } /* "\avous recevrez un pendentif de Joyau." */,
	{ "\aEncouragez votre Chao! Applaudissez\nvotre Chao s'il se met \340 clignoter,", 0 } /* "\aEncouragez votre Chao! Applaudissez\nvotre Chao s'il se met à clignoter," */,
	{ "\aIl ira un peu plus vite.\nApplaudissement: Boutons ABXY", 0 } /* "\aIl ira un peu plus vite.\nApplaudissement: Boutons ABXY" */,
	{ "\aD\351placez le curseur pour changer\nde prise de vue et choisissez celui", 0 } /* "\aDéplacez le curseur pour changer\nde prise de vue et choisissez celui" */,
	{ "\aque vous d\351sirez regarder.", 0 } /* "\aque vous désirez regarder." */,
	{ "\aChangement de prise de vue:\nles Boutons Directionnels", 0 } /* "\aChangement de prise de vue:\nles Boutons Directionnels" */,
	{ 0 }
};

HintText_Entry ChaoGardenMessages_Japanese[] = {
	{ ChaoGardenMessages_Japanese_0_Control, ChaoGardenMessages_Japanese_0_Text },
	{ ChaoGardenMessages_Japanese_1_Control, ChaoGardenMessages_Japanese_1_Text },
	{ ChaoGardenMessages_Japanese_2_Control, ChaoGardenMessages_Japanese_2_Text },
	{ NULL, ChaoGardenMessages_Japanese_3_Text },
	{ NULL, ChaoGardenMessages_Japanese_4_Text },
	{ NULL, ChaoGardenMessages_Japanese_5_Text },
	{ NULL, ChaoGardenMessages_Japanese_6_Text },
	{ NULL, ChaoGardenMessages_Japanese_7_Text }
};

HintText_Entry ChaoGardenMessages_French[] = {
	{ ChaoGardenMessages_French_0_Control, ChaoGardenMessages_French_0_Text },
	{ ChaoGardenMessages_French_1_Control, ChaoGardenMessages_French_1_Text },
	{ ChaoGardenMessages_French_2_Control, ChaoGardenMessages_French_2_Text },
	{ NULL, ChaoGardenMessages_French_3_Text },
	{ NULL, ChaoGardenMessages_French_4_Text },
	{ NULL, ChaoGardenMessages_French_5_Text },
	{ NULL, ChaoGardenMessages_French_6_Text },
	{ NULL, ChaoGardenMessages_French_7_Text }
};

HintText_Entry ChaoGardenMessages_Spanish[] = {
	{ ChaoGardenMessages_Spanish_0_Control, ChaoGardenMessages_Spanish_0_Text },
	{ ChaoGardenMessages_Spanish_1_Control, ChaoGardenMessages_Spanish_1_Text },
	{ ChaoGardenMessages_Spanish_2_Control, ChaoGardenMessages_Spanish_2_Text },
	{ NULL, ChaoGardenMessages_Spanish_3_Text },
	{ NULL, ChaoGardenMessages_Spanish_4_Text },
	{ NULL, ChaoGardenMessages_Spanish_5_Text },
	{ NULL, ChaoGardenMessages_Spanish_6_Text },
	{ NULL, ChaoGardenMessages_Spanish_7_Text }
};

HintText_Entry ChaoGardenMessages_German[] = {
	{ ChaoGardenMessages_German_0_Control, ChaoGardenMessages_German_0_Text },
	{ ChaoGardenMessages_German_1_Control, ChaoGardenMessages_German_1_Text },
	{ ChaoGardenMessages_German_2_Control, ChaoGardenMessages_German_2_Text },
	{ NULL, ChaoGardenMessages_German_3_Text },
	{ NULL, ChaoGardenMessages_German_4_Text },
	{ NULL, ChaoGardenMessages_German_5_Text },
	{ NULL, ChaoGardenMessages_German_6_Text },
	{ NULL, ChaoGardenMessages_German_7_Text }
};

HintText_Entry ChaoGardenMessages_English[] = {
	{ ChaoGardenMessages_English_0_Control, ChaoGardenMessages_English_0_Text },
	{ ChaoGardenMessages_English_1_Control, ChaoGardenMessages_English_1_Text },
	{ ChaoGardenMessages_English_2_Control, ChaoGardenMessages_English_2_Text },
	{ NULL, ChaoGardenMessages_English_3_Text },
	{ NULL, ChaoGardenMessages_English_4_Text },
	{ NULL, ChaoGardenMessages_English_5_Text },
	{ NULL, ChaoGardenMessages_English_6_Text },
	{ NULL, ChaoGardenMessages_English_7_Text }
};

#pragma warning(pop)
