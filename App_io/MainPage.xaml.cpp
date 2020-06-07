//
// MainPage.xaml.cpp
// Implementacja klasy MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App_io;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

MainPage::MainPage()
{
	InitializeComponent();

	Albums = ref new Platform::Collections::Vector<MusicLibrary::Album^>();
	Albums->Append(ref new MusicLibrary::Album(L"Stayin' alive", L"A, a, a, a, stayin' alive!", L"Bee Gees", L"1977", L"https://static.stereogum.com/uploads/2019/11/The-Bee-Gees-Stayin-Alive-1574874474-800x536.jpg"));
	Albums->Append(ref new MusicLibrary::Album(L"Killing Me Softly With Her Song", L"Take It Easy", L"Perry Como", L"1990", L"https://ecsmedia.pl/c/killing-me-softly-with-her-song-w-iext53741608.jpg"));
	Albums->Append(ref new MusicLibrary::Album(L"Hotel California", L" Live at the Summit, Houston, Texas", L"Eagles", L"1976", L"https://image.ceneostatic.pl/data/products/56635000/i-the-eagles-hotel-california-40th-anniversary-remastered-edition-cd.jpg"));
	Albums->Append(ref new MusicLibrary::Album(L"Rainbow in the Dark", L"When I see lightning, you know it always brings me down", L"Dio", L"1983", L"https://i.pinimg.com/736x/0a/97/ff/0a97ff3a726843248d3603e4777e6840.jpg"));
	itemListView->ItemsSource = Albums;
}
