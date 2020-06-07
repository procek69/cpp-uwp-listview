#pragma once

#include "MainPage.g.h"
#include <Album.h>

namespace App_io
{
	public ref class MainPage sealed
	{
	public:
		property Windows::Foundation::Collections::IObservableVector<MusicLibrary::Album^>^ Albums;
		MainPage();

	};
}
