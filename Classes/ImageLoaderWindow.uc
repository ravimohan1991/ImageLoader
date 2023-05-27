/*
 *   --------------------------
 *  |  ImageLoaderWindow.uc
 *   --------------------------
 *   This file is part of ImageLoader for UT99.
 *
 *   ImageLoader is free software: you can redistribute and/or modify
 *   it under the terms of the Open Unreal Mod License version 1.1.
 *
 *   ImageLoader is distributed in the hope and belief that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *   You should have received a copy of the Open Unreal Mod License
 *   along with MrEHasher.  If not, see
 *   <https://beyondunrealwiki.github.io/pages/openunrealmodlicense.html>.
 *
 *   Timeline:
 *   May, 2023 - Concept and implementation
 */

 class ImageLoaderWindow expands UWindowDialogClientWindow;

 var ImageLoader ILActor;
 var string SystemPath;

 var color BlackColor;

 function Created()
 {
 	Super.Created();

 	WinLeft = int(Root.WinWidth - WinWidth) / 2;
 	WinTop = int(Root.WinHeight - WinHeight) / 2;

 	ILActor = Root.GetPlayerOwner().Spawn(class'ImageLoader', Root.GetPlayerOwner());

 	SystemPath = ILActor.GetGameSystemPath();
 }


 function Resized()
 {
 	Super.Resized();
 }


 function Paint(Canvas C, float X, float Y)
 {
 	local float TitleXLength, TitleYLength;

 	Super.Paint(C, X, Y);

 	C.TextSize(SystemPath, TitleXLength, TitleYLength);
 	C.SetPos((WinWidth * Root.GUIScale) / 2 - TitleXLength / 2, Root.GUIScale * WinHeight / 2 - TitleYLength / 2);

 	C.DrawColor = BlackColor;
 	C.DrawText(SystemPath);
 }


 function Close(optional bool bByParent)
 {
 	Super.Close(bByParent);
 }

 defaultproperties
 {
 	BlackColor=(R=0,G=0,B=0)
 }

/*
 *		                                  /\
 *		                                 / /
 *		                              /\| |
 *		                              | | |/\
 *		                              | | / /
 *		                              | `  /
 *		                              `\  (___
 *		                             _.->  ,-.-.
 *		                          _.'      |  \ \
 *		                         /    _____| 0 |0\
 *		                        |    /`    `^-.\.-'`-._
 *		                        |   |                  `-._
 *		                        |   :                      `.
 *		                        \    `._     `-.__         O.'
 *		 _.--,                   \     `._     __.^--._O_..-'
 *		`---, `.                  `\     /` ` `
 *		     `\ `,                  `\   |
 *		      |   :                   ;  |
 *		      /    `.              ___|__|___
 *		     /       `.           (          )
 *		    /    `---.:____...---' `--------`.
 *		   /        (         `.      __      `.
 *		  |          `---------' _   /  \       \
 *		  |    .-.      _._     (_)  `--'        \
 *		  |   (   )    /   \                       \
 *		   \   `-'     \   /                       ;-._
 *		    \           `-'           \           .'   `.
 *		    /`.                  `\    `\     _.-'`-.    `.___
 *		   |   `-._                `\    `\.-'       `-.   ,--`
 *		    \      `--.___        ___`\    \           ||^\\
 *		     `._        | ``----''     `.   `\         `'  `
 *		        `--;     \  jgs          `.   `.
 *		           //^||^\\               //^||^\\
 *		           '  `'  `               '   '  `
 */
