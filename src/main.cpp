/*********************************************************************
 * Módulo 2. Curso de Experto en Desarrollo de Videojuegos
 * Autor: Carlos González Morcillo     Carlos.Gonzalez@uclm.es
 *
 * You can redistribute and/or modify this file under the terms of the
 * GNU General Public License ad published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * and later version. See <http://www.gnu.org/licenses/>.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.  
 *********************************************************************/

#include "ExampleApplication.h"

class Example4 : public ExampleApplication
{
public:

	void createScene()
	{
		Ogre::Entity* ent = mSceneMgr->createEntity("MyEntity","Sinbad.mesh");
		mSceneMgr->setAmbientLight(Ogre::ColourValue(1, 1, 1));

		Ogre::SceneNode* node = mSceneMgr->createSceneNode("Node1");
		node->setPosition(10,10,0);
		mSceneMgr->getRootSceneNode()->addChild(node);
		node->attachObject(ent);

		Ogre::Entity* ent2 = mSceneMgr->createEntity("MyEntity2","Sinbad.mesh");
		Ogre::SceneNode* node2 = mSceneMgr->createSceneNode("Node2");
		node->addChild(node2);
		node2->setPosition(10,0,0);
		node2->pitch(Ogre::Radian(Ogre::Math::HALF_PI));
		node2->attachObject(ent2);

		Ogre::Entity* ent3 = mSceneMgr->createEntity("MyEntity3","Sinbad.mesh");
		Ogre::SceneNode* node3 = mSceneMgr->createSceneNode("Node3");
		node->addChild(node3);
		node3->translate(20,0,0);
		node3->yaw(Ogre::Degree(90.0f));
		node3->attachObject(ent3);

		Ogre::Entity* ent4 = mSceneMgr->createEntity("MyEntity4","Sinbad.mesh");
		Ogre::SceneNode* node4 = mSceneMgr->createSceneNode("Node4");
		node->addChild(node4);
		node4->setPosition(30,0,0);
		node4->roll(Ogre::Radian(Ogre::Math::HALF_PI));
		node4->attachObject(ent4);

	}
};

int main (void)
{
	Example4 app;
	app.go();
	return 0;
}
