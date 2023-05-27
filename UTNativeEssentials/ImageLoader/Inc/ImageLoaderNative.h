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

#pragma once

#include "Core.h"
#include "Engine.h"

#include "ActorNativeClass.h"

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