#pragma once
/**
* OptionSystem.h
* ゲーム内設定システムのクラス
*/

#include "GameSystem/GameSystem.h"


class OptionSystem:public GameSystem
{
public:
	OptionSystem() {};
	~OptionSystem() {};


public:
	virtual bool Start()  override {};
	virtual void Update() override {};
};

