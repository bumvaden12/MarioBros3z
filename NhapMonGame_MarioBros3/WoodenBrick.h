#pragma once
#include "GameObject.h"
#include "Item.h"
#include "LeafTree.h"
#define WOODEN_BRICK_WIDTH 16

#define BRICK_STATE_MOVE_LEFT_RIGHT		100
#define BRICK_STATE_MOVE_RIGHT_RIGHT	200
#define BRICK_STATE_MOVE_LEFT_LEFT		300
#define BRICK_STATE_MOVE_RIGHT_LEFT		400
#define BRICK_STATE_IDLE				500

#define BRICK_VX						0.002f

#define BRICK_DISTANCE_MOVE				6.0f

#define BRICK_INCLUDE_ITEM				1
#define BRICK_NULL						0
class WoodenBrick : public CGameObject
{
	bool isFirstUpdate = true;
public:
	int typeBrick = BRICK_NULL;
	bool haveItem = false;
	CItem* item;
	float initX, initY;
	int typeItem;
	WoodenBrick();
	WoodenBrick(int typeItem);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* listItems);
	void SetState(int state);
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};

