/**
* Clear.h
* ClearŠî’êƒNƒ‰ƒX
*/

#pragma once
#include "Source/Scene/Scene.h"

class Clear :public Scene
{
public:
	Clear();
	virtual ~Clear();

public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};

};

