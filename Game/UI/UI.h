#pragma once
/*
* UI.h
* UI基底クラス
*/

class UI:public IGameObject
{
public:
	UI() {};
	~UI() {};
	//関数
	virtual bool Start() {};//初期化
	virtual void Update() {};//更新
	virtual void Render(RenderContext& rc) {};//描画


public :
	//メンバ変数
	SpriteRender m_uiRender;//UI描画用

};

