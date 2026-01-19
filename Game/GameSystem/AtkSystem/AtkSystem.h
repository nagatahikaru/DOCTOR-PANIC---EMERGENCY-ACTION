#pragma once
/**
* AtkSystem.h
* 攻撃システムのクラス
*/

#include "GameSystem/GameSystem.h"


class AtkSystem:public GameSystem
{
public:
	AtkSystem() {};
	~AtkSystem() {};


public:
	virtual bool Start()  override {};
	virtual void Update() override {};
};

