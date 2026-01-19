#pragma once
/**
* GameSystem.h
* ゲームシステム基底クラス
*/



class GameSystem:public IGameObject
{
public:
	GameSystem() {};
	~GameSystem() {};


public:
	virtual bool Start()  override {};
	virtual void Update() override {};
};

