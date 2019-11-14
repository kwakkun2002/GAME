#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new GameScene,L"¥Î≥≠≈ı", 750, 500, false);
	return 0;
}