#pragma once
#include "IPrimitive.h"
class Entity;
class Group: public IPrimitive
{
public:
	Group();
	~Group();
	virtual void decode(const std::string& fileName);
	virtual void render();
	virtual void destroy();
	virtual void setMatrix( const std::string& name, const Mat4& pMatrix );
	virtual AniMapIterator getAniMapIterator(void) const;
	virtual void setAnimationName(const std::string& fileName);
private:
	void _clear();
private:
	std::string mName;
	std::vector<Entity*> mEntities;
};
