enum OEC {
	OEC_LOAD_GFX = 0,
	OEC_LOAD_PAL1 = 1,
	OEC_LOAD_PAL2,
	OEC_CALL,
	OEC_END,
	OEC_GFX_PAL1_AND_CALL,
	OEC_GFX_AND_CALL,
	OEC_PAL1_AND_CALL
};

// 081D96AC
u8 oe_081D97C4[] = {
	OEC_CALL, &sub_08082544,
	OEC_END
};

// 081D97CA
u8 oe_cut[] = {
	OEC_CALL, &oei_cut,
	OEC_END
};

// 081D97D0
u8 oe_cut2[] = {
	OEC_CALL, &oei_cut2,
	OEC_END
};

// 081D97D6
u8 oe_081D97D6[] = {
	OEC_CALL, &sub_080DB1DC,
	OEC_END
};

// 081D96AC
u8 *oe_table[] = {
	&oe_081D97C4,
	&oe_cut,
	&oe_cut2,
	&oe_081D97D6
	/* ... */
}