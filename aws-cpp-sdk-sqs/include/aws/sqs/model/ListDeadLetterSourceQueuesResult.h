/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{
  /*
    A list of your dead letter source queues.
  */
  class AWS_SQS_API ListDeadLetterSourceQueuesResult
  {
  public:
    ListDeadLetterSourceQueuesResult();
    ListDeadLetterSourceQueuesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDeadLetterSourceQueuesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     A list of source queue URLs that have the RedrivePolicy queue attribute configured with a dead letter queue.
    */
    inline const Aws::Vector<Aws::String>& GetQueueUrls() const{ return m_queueUrls; }
    /*
     A list of source queue URLs that have the RedrivePolicy queue attribute configured with a dead letter queue.
    */
    inline void SetQueueUrls(const Aws::Vector<Aws::String>& value) { m_queueUrls = value; }

    /*
     A list of source queue URLs that have the RedrivePolicy queue attribute configured with a dead letter queue.
    */
    inline ListDeadLetterSourceQueuesResult&  WithQueueUrls(const Aws::Vector<Aws::String>& value) { SetQueueUrls(value); return *this;}

    /*
     A list of source queue URLs that have the RedrivePolicy queue attribute configured with a dead letter queue.
    */
    inline ListDeadLetterSourceQueuesResult& AddQueueUrls(const Aws::String& value) { m_queueUrls.push_back(value); return *this; }

    /*
     A list of source queue URLs that have the RedrivePolicy queue attribute configured with a dead letter queue.
    */
    inline ListDeadLetterSourceQueuesResult& AddQueueUrls(const char* value) { m_queueUrls.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListDeadLetterSourceQueuesResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_queueUrls;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws