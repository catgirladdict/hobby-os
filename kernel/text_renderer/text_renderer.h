#pragma once

#include <stdint.h>

#include "font.h"
#include "../../common/graphics_info.h"

class TextRenderer {
	public:
		TextRenderer(GraphicsInfo);
		void set_cursor_x(uint16_t);
		void set_cursor_y(uint16_t);
		uint16_t cursor_x();
		uint16_t cursor_y();
		bool draw_character(char);
		void draw_string(char*);

	private:
		GraphicsInfo m_graphics_info;
		uint16_t m_cursor_x;
		uint16_t m_cursor_y;
};