void reverse_array(float *arr, int zsize);

void reverse_rows(float *arr, int cols, int datasize);

void filter_nodata(float *arr, int datasize, float nodata);

float maximum(float *arr, int n, float nodata);

float minimum(float *arr, int n, float nodata);

float meanvalue(float *arr, int n, float nodata);

int dssDataType(const char *dType);

int dssCompressionMethod(const char *compressMethod);

int tzOffset(const char *tz);

int dssGridType(const char *gtype);

char *dssGridDef(int gtype);

char *utmGridDef(int zone, char *utmHemi);

float roundValue(float var, int precision);

void rangelimit_table(float minval, float maxval, int range, int bins, int datasize, float *rangelimit, int *histo, float *data);
