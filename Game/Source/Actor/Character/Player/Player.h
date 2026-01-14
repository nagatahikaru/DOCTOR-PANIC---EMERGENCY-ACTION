/**
* Player.h
* プレイヤー基底クラス
*/

#pragma once
#include "Source/Actor/Character/Character.h"

class Player :public Character
{
public:
	Player();
	virtual ~Player();

public:
	virtual bool Start() override;
	virtual void Update() override;
	virtual void Render(RenderContext& rc) override;
};

