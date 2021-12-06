FILE* f;
	errno_t errorCheck;
	errorCheck = fopen_s(&f, fname, "wt");
