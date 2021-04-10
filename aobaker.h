
namespace aobaker {

	struct config
	{
		int rayCount = 200;
		bool onlyCastRaysUpwards = true;
		float rayOriginOffset = 0.001f;
		float rayDistance = 5.0f;
		float falloff = 6.0f;
		float denoiseWeight = 0.3f;
		int denoisePasses = 1;
		bool voxelize = true;
		float voxelSize = 0.01f;
	};

	void BakeAoToVertices(
		const float* firstVertexPosition, float* firstAoTarget, int vertexCount, size_t stride,
		const unsigned int* indices, int indexCount,
		const config& conf);
}
