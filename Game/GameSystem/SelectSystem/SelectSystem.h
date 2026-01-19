#pragma once
/**
* SelectSystem.h
* ステージ選択システムのクラス
*/

#include "GameSystem/GameSystem.h"


class SelectSystem:public GameSystem
{
public:
	SelectSystem() {};
	~SelectSystem() {};


public:
	virtual bool Start()  override {};
	virtual void Update() override {};
};

