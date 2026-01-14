/**
* Titer.h
* TiterŠî’êƒNƒ‰ƒX
*/

#pragma once
#include "Source/Scene/Scene.h"

class Titer :public Scene
{
public:
	Titer();
	virtual ~Titer();

public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};

};

