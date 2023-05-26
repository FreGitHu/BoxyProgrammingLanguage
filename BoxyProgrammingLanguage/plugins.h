#pragma once
constexpr bool _iswindows() {
	if (WIN32) {
		return false;
	} else {
		return true;
	}
}