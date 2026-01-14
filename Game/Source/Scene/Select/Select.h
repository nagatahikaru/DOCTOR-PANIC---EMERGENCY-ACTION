/**
* Select.h
* SelectŠî’êƒNƒ‰ƒX
*/

#pragma once
#include "Source/Scene/Scene.h"

class Select :public Scene
{
public:
	Select();
	virtual ~Select();

public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};

};

