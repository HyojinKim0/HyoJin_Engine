#pragma once
#include "CommonInclude.h"

namespace hyo
{
	enum class eKeyState
	{
		//문자를 숫자화 
		Down,
		Pressed,
		Up,
		None,
	};

	enum class eKeyCode
	{
		Q, W, E, R, T, Y, U, I, O, P,
		A, S, D, F, G, H, J, K, L,
		Z, X, C, V, B, N, M,
		Left,Right,Down,Up,
		End,
	};

	class Input
	{
	public:
		struct Key
		{
			eKeyCode keyCode;// 문자로 처리안하고 enum으로 숫자로 
			eKeyState state;
			bool bPressed;// 눌려져 있는지 
		};

		static void Initailize();
		static void Update();
		 
		static bool GetKeyDown(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Down; }
		static bool GetKeyUp(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Up; }
		static bool GetKey(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Pressed; }

	private:
		//eKeyState mState[] = eKeyState::Up;
		static std::vector<Key> mKeys;
	};
}