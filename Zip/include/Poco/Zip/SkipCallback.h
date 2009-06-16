//
// SkipCallback.h
//
// $Id: //poco/Main/Zip/include/Poco/Zip/SkipCallback.h#4 $
//
// Library: Zip
// Package: Zip
// Module:  SkipCallback
//
// Definition of the SkipCallback class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Zip_SkipCallback_INCLUDED
#define Zip_SkipCallback_INCLUDED


#include "Poco/Zip/Zip.h"
#include "Poco/Zip/ParseCallback.h"


namespace Poco {
namespace Zip {


class Zip_API SkipCallback: public ParseCallback
	/// A SkipCallback simply skips over the data
{
public:
	SkipCallback();
		/// Creates the SkipCallback.

	virtual ~SkipCallback();
		/// Destroys the SkipCallback.

	bool handleZipEntry(std::istream& zipStream, const ZipLocalFileHeader& hdr);
};


} } // namespace Poco::Zip


#endif // Zip_SkipCallback_INCLUDED
