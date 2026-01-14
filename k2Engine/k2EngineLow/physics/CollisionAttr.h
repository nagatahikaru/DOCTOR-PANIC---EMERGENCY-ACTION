/*!
 * @brief	コリジョン属性
 */
#pragma once

namespace nsK2EngineLow {
	/*!
	 * @brief	コリジョン属性の大分類。
	 */
	enum EnCollisionAttr {
		enCollisionAttr_Ground, 	//地面
		enCollisionAttr_Character, 	//キャラクター
		enCollisionAttr_User,		//以下にユーザー定義のコリジョン属性を設定する。
		enCollisionAttr_Wall,		//壁
	};
}