/**
* Result.h
* ResultŠî’êƒNƒ‰ƒX
*/

#pragma once
#include "Source/Scene/Scene.h"

class Result :public Scene
{
public:
	Result();
	virtual ~Result();

public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};

};

