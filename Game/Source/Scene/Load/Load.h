/**
* Load.h
* LoadŠî’êƒNƒ‰ƒX
*/

#pragma once
#include "Source/Scene/Scene.h"

class Load :public Scene
{
public:
	Load();
	virtual ~Load();

public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};

};

