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

		
		//객체 추가시 여러 플레이어 사용가능 키조정필요 

		GameObject mPlayer;

	};
}


