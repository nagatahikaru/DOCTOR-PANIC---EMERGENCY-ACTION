/**
* Character.h
* キャラクターの基底クラス
*/
#pragma once

/**
* キャラクタークラス
*/

#include "Source/Actor/Actor.h"

class Character : public Actor
{
protected:




public:
	virtual bool Start() override {};
	virtual void Update() override {};
	virtual void Render(RenderContext& rc) override {};
};



