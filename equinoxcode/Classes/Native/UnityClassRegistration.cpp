struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 87 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//4. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//7. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//30. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//31. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//32. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//35. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//36. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//37. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//38. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//39. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//40. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//41. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//42. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//45. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//46. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//47. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//48. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//49. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//50. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//51. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//52. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//53. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//54. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//55. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//56. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//57. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//58. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//59. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//60. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//61. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//62. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//63. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//64. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//65. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//66. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//67. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//68. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//69. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//70. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//71. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//72. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//73. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//74. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//75. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//76. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//77. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//78. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//79. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//80. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//81. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//82. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//83. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//84. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//85. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
