/********************************************************************
**	file: 		IMaterial.h
**	author:		cpzhang <chengpengzhang@gmail.com>
**	created:	2011-12-9
**	purpose:	
*********************************************************************/
#ifndef __IMaterial_h__
#define __IMaterial_h__
#include "Common.h"
#include "RenderEngineCreationParameters.h"
namespace Euclid
{
	enum eMaterialType
	{
		eMaterialType_Vertex,
		eMaterialType_Size,
	};
	class _EuclidExport_ IMaterial
	{
	public:
		//
		void setVertexDeclaration(eVertexDeclarationType e);
		//
		void apply();
	private:
		eVertexDeclarationType	_vertexDeclaration;
	};

	class IMaterialManager
	{
	public:
		virtual IMaterial* createMaterial(eMaterialType e) = 0;
	};
}


#endif // __IMaterial_h__