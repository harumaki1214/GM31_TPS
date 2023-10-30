#pragma once
#include"gameObject.h"
#include"model.h"

class Box : public GameObject
{
private:
	Model* m_BoxModel{};

	ID3D11VertexShader* m_VertexShader{};
	ID3D11PixelShader* m_PixelShader{};
	ID3D11InputLayout* m_VertexLayout{};

public:
	void Init();
	void Uninit();
	void Update();
	void Draw();

	//void SetPosition();
};