//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include <iostream>

using namespace std;

namespace DesktopCalculator
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		string chars1;
		string chars2;
		char method;
		string screenText;
		string output;
		void appendChar(int num);
		void updateScreen();
		void Zero(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void One(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Two(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Three(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Four(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Five(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Six(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Seven(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Eight(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Nine(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Plus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Times(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Minus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Finish(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Clear(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
