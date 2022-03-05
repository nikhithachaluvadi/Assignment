// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLL2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLL2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLL2_EXPORTS
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DLL2_API CDLL2 {
public:
	CDLL2(void);
	// Shopping: add your methods here.
};

extern DLL2_API int nDLL2;

DLL2_API int fnDLL2(void);

namespace DynamicCrudLibrary2 {
	class DLL2_API Animate {
	public:
		static void animateScreen();

	};
}
