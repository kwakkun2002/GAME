#include "stdafx.h"
#include "TestObject.h"
#include "InputManager.h"


TestObject::TestObject()
	:GameObject(L"sun.jpg"),		//���ӿ�����Ʈ�� �����մϴ�.
	col2(*transform,40.0f)
{
	transform->SetPosition(300.0f, 400.0f);
}

void TestObject::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()�� ���� ���콺 ��ġ�� ��ȯ���� �� �ֽ��ϴ�.
	//if (col2.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
	//	printf("����\n");
}
