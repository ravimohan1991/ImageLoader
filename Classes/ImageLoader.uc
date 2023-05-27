/*
 *   ----------------
 *  |  ImageLoader.uc
 *   ----------------
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

 class ImageLoader extends Actor native
	noexport;

 native final static function string GetGameSystemPath();
