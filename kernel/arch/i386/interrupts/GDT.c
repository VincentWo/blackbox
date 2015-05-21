/**
 * \param target A pointer to the 8-byte GDT entry
 * \param source An arbitrary structure describing the GDT entry
 */
void encodeGdtEntry(uint8_t *target, struct GDT source)
{
	if((source.limit > 655336) && (source.limit & 0xFFF) != 0xFFF) {
		
	}
