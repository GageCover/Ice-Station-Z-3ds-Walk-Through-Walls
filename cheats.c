void	Walk_Through_Walls(void)
{
	WRITEU32(offset + 0x0482F28, 0xBDCCCCCD);
	WRITEU32(offset + 0x015FCE0, 0x3F800000);
	WRITEU32(offset + 0x012DBD0, 0x0A000002);
	WRITEU32(offset + 0x02421A4, 0xEA000016);
	WRITEU32(offset + 0x0249F47, 0x00000043);
	WRITEU32(offset + 0x0242214, 0xED800A08);
	WRITEU32(offset + 0x02421A4, 0x0A000016);
	if (is_pressed(0x00000800))
	{
		WRITEU32(offset + 0x02421A4, 0xEA000016);
		WRITEU32(offset + 0x0242214, 0xEAFFFFE9);
		WRITEU32(offset + 0x012DBD0, 0x1A000002);
		WRITEU32(offset + 0x0482F28, 0x00000000);
		WRITEU32(offset + 0x04836B4, 0xFFFFFFFF);
		if (is_pressed(0x12345678))
		{
			WRITEU32(offset + 0x0249F44, 0x00000047);
			WRITEU32(offset + 0x0249F45, 0x00000043);
			WRITEU32(offset + 0x0249F46, 0x0000004C);
			WRITEU32(offset + 0x0249F47, 0x00000043);
			offset = 0;
			data = 0;
		}
	}
}
