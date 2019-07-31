#pragma once
#include "Component.h"
#include "Vec2D.h"

namespace jp {

	class TransformComponent :
		public Component
	{
	public:
		TransformComponent();
		~TransformComponent();

		void update(GameObject& gameObject, float dt)override;
	private:
		Vec2D _position;
		Vec2D _velocity;
		Vec2D _acceleration;
		float mass;

	};

}

