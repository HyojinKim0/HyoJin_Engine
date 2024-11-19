#include "Application.h"
#include"HyoInput.h"
namespace hyo
{
	// 초기화 이용
	Application::Application()
		: mHwnd(nullptr)
		, mHdc(nullptr)
	{

	}

	
	Application::~Application()
	{

	}
	void Application::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(hwnd);

		mPlayer.SetPosition(0, 0);

		Input::Initailize();

	}

	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();

	}

	void Application::Update()// 로직 업데이트 
	{
		Input::Update();

		mPlayer.Update();
	}
	void Application::LateUpdate()
	{
	
	}
	void Application::Render()// 그리기만
	{
		mPlayer.Render(mHdc);
	}

}