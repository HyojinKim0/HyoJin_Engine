
#include "HyoGameObject.h"


namespace hyo
{
	

	GameObject::GameObject()
	{

	}

	GameObject::~GameObject()
	{

	}
	void GameObject::Update()
	{	
		// 문자키는 ('W')로 누를것 
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mX -= 0.01f;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mX += 0.01f;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mY -= 0.01f;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			mY += 0.01f;
		}
	
	}
	void GameObject::LateUpdate()
	{

	}
	void GameObject::Render(HDC hdc) 
	{
		
		Rectangle(hdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);
	}
}

