#pragma once
#include "CommonInclude.h"
#include "HyoGameObject.h"
namespace hyo
{
	class Application
	{
	public:
		Application();
		~Application();

		void Initialize(HWND hwnd);

		void Run();

		void Update();
		void LateUpdate();
		void Render();
	
	private:
		HWND mHwnd; //핸들, 한번 받아놓으면 편해서 
		HDC mHdc; // 출력 제어 dc 

		float mSpeed;

		
		//float mX;
		//float mY;

		GameObject mPlayer;

	};
}


