#pragma once
#include "stdafx.h"

/*
* GameData.h
* ゲームデータ管理クラス
*/

class GameData
{
private:
	GameData() {};
	~GameData() {};
	static GameData* m_gameData;


public:
	//インスタンス管理関数
	static GameData* GetInstance()
	{
		return m_gameData;
	}
	//インスタンス生成
	static void CreateInstance()
	{
		if (m_gameData == nullptr)
		{
			m_gameData = new GameData();
		}
	}
	//インスタンス破棄
	static void DeleteInstance()
	{
		if (m_gameData != nullptr)
		{
			delete m_gameData;
			m_gameData = nullptr;
		}
	}	

	//データ記録関数
	//引数：識別番号
	//　　：記録するデータ	
	//0：BGM音量データ
	//1：SE音量データ
	//2：アイテム所持量データ
	//3：ステージデータ
	//4：クリアステージデータ
	//5：スコアデータ
	//6：残基データ
	//7：ハイスコアデータ
	void DataRecord(int m_IdentificationNumber,int *Data)
	{
		//データ記録処理
		switch (m_IdentificationNumber)
		{
			//BGM音量データ
			case 0:
				m_bgmVolumeData = *Data;
			break;
			//SE音量データ
			case 1:
				m_seVolumeData = *Data;
			break;
			//アイテムデータ
			case 2:
				m_itemInventoryData = *Data;			
			break;
			//ステージデータ
			case 3:
				m_stageData = *Data;
			break;
			//クリアステージデータ
			case 4:
				if (m_clearStageData < *Data)
				{
					m_clearStageData = *Data;
				}
			break;
			//スコアデータ
			case 5:
				m_scoreData = *Data;
			break;
			//残基データ
			case 6:
				m_residueData = *Data;
			break;
			//ハイスコアデータ
			case 7:
				if (m_highScoreData < *Data)
				{
					m_highScoreData = *Data;
				}
			break;

		}
	}

	//データ取得関数
	//引数：識別番号
	//戻り値：取得したデータ
	//0：BGM音量データ1,：SE音量データ
	//2：アイテム所持量データ
	//3：ステージデータ
	//4：クリアステージデータ
	//5：スコアデータ
	//6：残基データ
	//7：ハイスコアデータ
	int DataGet(int m_IdentificationNumber)
	{
		//データ取得処理
		switch (m_IdentificationNumber)
		{
			//BGM音量データ
			case 0:
				return m_bgmVolumeData;
			break;
			//SE音量データ
			case 1:
				return m_seVolumeData;
			break;
			//アイテムデータ
			case 2:
				return m_itemInventoryData;			
			break;			
			//ステージデータ
			case 3:
				return m_stageData;
			break;
			//クリアステージデータ
			case 4:
				return m_clearStageData;
			break;
			//スコアデータ
			case 5:
				return m_scoreData;
			break;
			//残基データ
			case 6:
				return m_residueData;
			break;
			//ハイスコアデータ
			case 7:
				return m_highScoreData;
			break;
		}		
	}


private:
	int m_itemInventoryData=0; //アイテム所持量データ
	int m_bgmVolumeData=50; //音量データ
	int m_seVolumeData=50; //SE音量データ
	int m_stageData=0;//ステージデータ
	int m_clearStageData=0;//クリアステージデータ
	int m_scoreData = 0;//スコアデータ
	int m_highScoreData = 0;//ハイスコアデータ
	int m_residueData = 3; //残基データ
	int m_dummyData = 0;//ダミーデータ
};

//GameDataのインスタンス管理クラス
class DataManager :public IGameObject
{
	public:
		//コンストラクタ・デストラクタ
	DataManager(){GameData::CreateInstance();}
	~DataManager() { GameData::DeleteInstance(); }


};
