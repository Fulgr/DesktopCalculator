//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <iostream>

using namespace DesktopCalculator;

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
using namespace std;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}

Platform::String^ convertFromString(const std::string& input)
{
	std::wstring w_str = std::wstring(input.begin(), input.end());
	const wchar_t* w_chars = w_str.c_str();

	return (ref new Platform::String(w_chars));
}

void DesktopCalculator::MainPage::appendChar(int num) {
	if (this->method) {
		this->chars2 += to_string(num);
		this->updateScreen();
		return;
	}
	this->chars1 += to_string(num);
	this->updateScreen();
}
void DesktopCalculator::MainPage::updateScreen()
{
	this->screenText = this->chars1 + " " + this->method + " " + this->chars2 + " " + this->output;
	TextScreen->Text = convertFromString(this->screenText);
}
void DesktopCalculator::MainPage::Zero(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(0); }
void DesktopCalculator::MainPage::One(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(1); }
void DesktopCalculator::MainPage::Two(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(2); }
void DesktopCalculator::MainPage::Three(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(3); }
void DesktopCalculator::MainPage::Four(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(4); }
void DesktopCalculator::MainPage::Five(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(5); }
void DesktopCalculator::MainPage::Six(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(6); }
void DesktopCalculator::MainPage::Seven(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(7); }
void DesktopCalculator::MainPage::Eight(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(8); }
void DesktopCalculator::MainPage::Nine(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->appendChar(9); }
void DesktopCalculator::MainPage::Plus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->method = '+'; this->updateScreen(); }
void DesktopCalculator::MainPage::Minus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->method = '-'; this->updateScreen(); }
void DesktopCalculator::MainPage::Times(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { this->method = 'x'; this->updateScreen(); }
void DesktopCalculator::MainPage::Finish(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) { 
	int answer = 0;
	int chars1 = 0;
	int chars2 = 0;
	chars1 = stoi(this->chars1);
	chars2 = stoi(this->chars2);
	if (this->method == '+') {
		answer = chars1 + chars2;
	}
	if (this->method == '-') {
		answer = chars1 - chars2;
	}
	if (this->method == 'x') {
		answer = chars1 * chars2;
	}
	if (this->method == '/') {
		answer = chars1 / chars2;
	}
	this->output = "= " + to_string(answer);
	this->updateScreen();
}
void DesktopCalculator::MainPage::Clear(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) {
	this->chars1 = "";
	this->chars2 = "";
	this->method = '+';
	this->output = "";
	this->updateScreen();
}