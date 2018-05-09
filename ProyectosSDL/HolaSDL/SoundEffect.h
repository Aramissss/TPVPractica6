#pragma once

#include "sdl_includes.h"
#include <string>

class SoundEffect {
public:
	SoundEffect();
	SoundEffect(std::string fileName);
	virtual ~SoundEffect();
	bool load(std::string fileName);
	void play(int repetirions = 0);
	void pause();
	void close();
private:
	Mix_Chunk *chunck_ = nullptr;
};

