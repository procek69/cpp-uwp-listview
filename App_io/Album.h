#pragma once
namespace MusicLibrary {

	[Windows::UI::Xaml::Data::Bindable]
	public ref class Album sealed
	{
	private: 
		Platform::String^ _title;
		Platform::String^ _subtitle;
		Platform::String^ _author;
		Platform::String^ _year;
		Platform::String^ _image;
	public:
		Album() {};
		Album(Platform::String^ title, Platform::String^ subtitle, Platform::String^ author, Platform::String^ year, Platform::String^ image) : _title(title), _subtitle(subtitle), _author(author), _year(year), _image(image) {};
		property Platform::String^ Title
		{
			Platform::String^ get() { return this->_title; }
		}

		property Platform::String^ Subtitle
		{
			Platform::String^ get() { return this->_subtitle; }
		}

		property Platform::String^ Author
		{
			Platform::String^ get() { return this->_author; }
		}

		property Platform::String^ Year
		{
			Platform::String^ get() { return this->_year; }
		}

		property Platform::String^ Image
		{
			Platform::String^ get() { return this->_image; }
		}
	};
}

