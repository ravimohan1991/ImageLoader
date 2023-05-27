/*
 *   ----------------------
 *  |  ImageLoaderNative.h
 *   ----------------------
 *   This file is part of ImageLoader for UT99.
 *
 *   ChatDiamond is free software: you can redistribute and/or modify
 *   it under the terms of the Open Unreal Mod License version 1.1.
 *
 *   ImageLoader is distributed in the hope and belief that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *   You should have received a copy of the Open Unreal Mod License
 *   along with ImageLoader.  If not, see
 *   <https://beyondunrealwiki.github.io/pages/openunrealmodlicense.html>.
 *
 *   Timeline:
 *   May, 2023 - Concept and implementation
 */

#include "ImageLoaderNative.h"
#include <regex>
#include <iostream>
#include <fstream>

IMPLEMENT_PACKAGE(ImageLoader);

IMPLEMENT_CLASS(AImageLoader);

AImageLoader::AImageLoader()
{
	//Super::AActor(); // Call super's constructor.
}

void AImageLoader::execTestFunction(FFrame& Stack, RESULT_DECL)
{
	guard(ACDDiscordActor::execTestFunction);
	P_GET_STR(S);//Get the first parameter
	P_GET_INT(I);//and the second
	P_FINISH;//you MUST call this or it will crash.

	GLog->Logf(TEXT("Hello World! S=%s,I=%i"), *S, I);//Log output and use printf format.
	//You may also use debugf(TEXT("Hello world!")) since it may be easier to remember.
	*(UBOOL*)Result = true;// Return true to UScript, this is how you return a result. You cast your result into "Result" -- whatever it may be.
	unguard;
}
IMPLEMENT_FUNCTION(AImageLoader, -1, execTestFunction);


void AImageLoader::execGetGameSystemPath(FFrame& Stack, RESULT_DECL)
{
	guard(AImageLoader::execGetGameSystemPath);

	P_FINISH;

	*(FString*)Result = appBaseDir();

	unguard;
}
IMPLEMENT_FUNCTION(AImageLoader, -1, execGetGameSystemPath)

/*
 *
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