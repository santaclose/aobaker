
namespace aobaker {

	struct config
	{
		int rayCount = 500;
		bool onlyCastRaysUpwards = true;
		float rayOriginOffset = 0.001f;
		float denoiseWeight = 0.2f;
		int denoisePasses = 2;
		bool voxelize = true;
		bool autoConfigure = true;
			float voxelSize = 0.01f;
			float rayDistance = 5.0f;
			float falloff = 6.0f;
	};

	void BakeAoToVertices(
		const float* firstVertexPosition, float* firstAoTarget, int vertexCount, unsigned int vertexStride, unsigned int targetStride,
		const unsigned int* indices, int indexCount,
		config& conf);

	void BakeAoToVertices(
		const double* firstVertexPosition, float* firstAoTarget, int vertexCount, unsigned int vertexStride, unsigned int targetStride,
		const unsigned int* indices, int indexCount,
		config& conf);
}