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
		HWND mHwnd; //�ڵ�, �ѹ� �޾Ƴ����� ���ؼ� 
		HDC mHdc; // ��� ���� dc 

		float mSpeed;

		
		//��ü �߰��� ���� �÷��̾� ��밡�� Ű�����ʿ� 

		GameObject mPlayer;

	};
}


