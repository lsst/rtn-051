.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Breakdown:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

##########################################
Breakdown of Risk, Plan and Action Objects
##########################################

.. This section should provide a brief, top-level description of the page.

This page explains and defines the fields associated with :ref:`risks <Breakdown-Risk>`.

.. Placeholder: This page explains and defines the fields associated with :ref:`risks <Breakdown-Risk>`, :ref:`plans <Breakdown-Plan>` and :ref:`actions <Breakdown-Action>`.

The tables which define the categories when analyzing risks are provided in the :ref:`Breakdown-Risk-Tool-Tables`.
The source of this information is within the Risk Tool.


.. _Breakdown-Risk:

Breakdown of a risk
===================

This section breaks down an example risk into:

* :ref:`Breakdown-Risk-Identification`
* :ref:`Breakdown-Risk-Initial-Impact`
* :ref:`Breakdown-Risk-Score-Quantitative`
* :ref:`Breakdown-Risk-Residual-Impact`, and
* :ref:`Breakdown-Risk-Comments-History`.


.. _Breakdown-Risk-Identification:

Risk identification
-------------------

The first section is used to identify and categorize the risk and those responsible for its management.

.. figure:: /_static/Risk-Example-Risk-Identification.png
    :name: Risk-Example-Risk-Identification

    Risk Identification section using an example risk.

Project
	Always use ``Rubin Operations``.

Risk ID
	Automatically generated unique identifier.

Risk Type
	``Threats`` or ``Opportunities``.

Status
	``Candidate``, ``Active``, ``Retire``, ``Realized``, or ``Depreciated``.

Risk Department
	Rubin Observatory Department which owns the risk and responsible for its management.

Risk Category and Sub Category
	Categorizes the risk using the information in :ref:`Risk-Category-Table`.
	This information is defined within the Risk Tool --- click the information button next to the field to display the information.

Risk Title
	Short, descriptive title for the risk.

Risk Statement
    All risk statements are required to conform to IF-THEN statements.
    The statement should present the possible risk event or condition ("if") and the potential outcome or consequences ("then").

Date Entered, Date Last Modified, Last Modified By
	These fields are automatically generated.

Share Risk Externally
	``Yes`` or ``No`` depending on if the risk is shared external to the project.

.. todo::
   Determine if this is external to project or external stakeholders.

Parent
	This will list associated Parent Risks of a Child Risk.

	``Parent Risks`` are considered a "headline risk" to allow management to drill down to the ``Child Risk(s)`` that are of concern.

	Parent Risks are not assessed directly, and they inherit the risk level of the highest-level Child Risk.


.. _Breakdown-Risk-Initial-Impact:

Risk initial impact
-------------------

Risks are analyzed by the ``Cost Impact``, ``Schedule Impact`` to the project, and the ``Likelihood`` for it to be realized.
The risk should first be analyzed under the initial condition of realization, i.e., before responses take effect.
The impact categorizations will automatically generate the :ref:`Risk Score <Breakdown-Risk-Score-Quantitative>` fields as the product of the impact and likelihood.

These are categorized into five levels of severity, as defined in :ref:`Breakdown-Risk-Tool-Tables`.
This information is defined within the Risk Tool --- click the information button next to the field to display the information.

.. figure:: /_static/Risk-Example-Analyze-Risk-Impacts.png
    :name: Risk-Example-Analyze-Risk-Impacts

    Risk Impacts sections using an example risk.

Overall Impact
	This is an optional field to categorize the overall impact of the risk to the project.

	It can increase the ``Impact Severity``, as shown in this example risk.

	See :ref:`Risk-Impact-Table` for categories.

Cost Impact
	Categorization of cost impact to the project.

	For the Rubin Observatory, the annual budget of $70,000,000 will be used.

	See :ref:`Risk-Impact-Table` for categories.

Schedule Impact
	Categorization of schedule impact to the project.

	Contact your department's Associate Director to determine specifics about the schedule and critical path.

	See :ref:`Risk-Impact-Table` for categories.

Likelihood
	Overall chance of risk being realized.

	See :ref:`Likelihood-Table` for categories.

Existential Risk
	Select ``Yes`` if the risk is existential to NOIRLab.

	The Rubin Observatory Risk and Opportunity Board will determine if this is appropriate.

Schedule/Cost Impact Description
	Use these sections to describe and comment on impact categorization and the decision on rating.


.. _Breakdown-Risk-Score-Quantitative:

Risk score and quantitative analysis 
------------------------------------

The fields under ``Risk Score`` are automatically generated based on input selections from :ref:`risk impacts <Breakdown-Risk-Initial-Impact>`.
Categories and values are based on the :ref:`Breakdown-Risk-Tool-Tables`.
The ``Analyze Risk Quantitative`` section will not affect values and categories; however, the section will record the impact justification and provide information needed to categorize the impacts.

.. figure:: /_static/Risk-Example-Analyze-Risk-Score-and-Quantitative.png
    :name: Risk-Example-Analyze-Risk-Score-and-Quantitative

    Risk Score and Analysis Quantitative sections using an example risk.

Impact Severity
	Automatically generated category based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

	See :ref:`Risk-Impact-Table` for categories.

Impact Score
	Automatically generated value based on ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Likelihood Score
	Automatically generated value based on ``Likelihood``.

Probability
	Automatically generated value based on ``Likelihood``.

Initial Risk Score
	Automatically generated value based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Minimum Delay (Months)
	Minimum delay if risk is realized.

Maximum Delay (Months)
	Maximum delay if risk is realized.

Likely Delay (Months)
	Most likely delay if risk is realized.

Expected Schedule Delay (Months)
	Automatically generated value based on ``Minimum Delay``, ``Maximum Delay``, and ``Likely Delay``.

.. todo::
   Define formula for Expected Schedule Delay.

Impact Time
	Date when realized risk would impact the schedule.

Impacted Event/Milestone
	The event or milestone of a realized risk.

Basis of Estimate
	Reference to basis of estimate capturing impact of realized risk.

Minimum Cost (US Dollars)
	Minimum cost of realized risk.

Maximum Cost (US Dollars)
	Maximum cost of realized risk.

Likely Cost (US Dollars)
	Likely cost of realized risk.

.. todo::
   Define when dollar value should be evaluated, e.g., year of impact, year of entry.

Expected Cost Impact
	Automatically generated value based on the following formula:

	``Minimum Cost`` + ``Likely Cost``*4 + ``Maximum Cost``/6

Expected Monetary Value
	Automatically generated value based on the following formula:

	(``Minimum Cost`` + ``Likely Cost``*4 + ``Maximum Cost``/6) * ((``Likelihood Score`` * 0.20) - 0.10)

Financial Provision
	This field is not used by Rubin Observatory.

Number of Possible Occurrences
	Define the number of potential occurrences this risk can be realized.


.. _Breakdown-Risk-Residual-Impact:

Risk residual impact
--------------------

.. Use :ref:`Response Plans <Breakdown-Plan>` when section is ready.

After a risk is realized, Response Plans are used to address it.
The ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` analyze the realized risk impact after the plan is activated.
The methods and definitions for categorization are the same as :ref:`Breakdown-Risk-Initial-Impact` and :ref:`risk scores <Breakdown-Risk-Score-Quantitative>`.

.. figure:: /_static/Risk-Example-Plans-Actions-Residual-Risk.png
    :name: Risk-Example-Plans-Actions-Residual-Risk

    Residual Risk Impacts and related Response Plans and Related Actions sections using an example risk.

Plan Type
	The ``plan type`` is the strategic process of controlling the identified risks via response plans.
	There are four types of processes, and their implementation depends on if the risk is a threat or opportunity.

.. figure:: /_static/Response-Plan-Types.png
    :name: Response-Plan-Types

    Four processes and respective threat or opportunity response plan types.

Response Types for Threats
	Avoid
		Changing your strategy or plans to avoid the risk.
		This risk response strategy is about removing the threat by any means.
		That can mean changing your management plan to avoid the risk because it’s detrimental to the project/program.

	Transfer
		Passing ownership and/or liability to a third party to resolve the risk, e.g., purchase fire insurance for an unfinished building.

	Mitigate
		Reducing the probability and/or impact of the risk below a threshold of acceptability.
		Some risks cannot be avoided and need to take action to reduce the impact of the risk, e.g., work procedures and equipment designed to reduce workplace safety risks.

	Accept
		Recognizing residual risks and devising responses to control and monitor them.
		This risk response strategy consists of identifying a risk and documenting all the risk management information about it, but not taking any action unless the risk is realized.

Response Types for Opportunities
	Exploit
		Exploiting a risk to make use of the opportunity that becomes available if that risk occurs.

	Share
		Distributing the risk across multiple stakeholders (teams/projects/programs).

	Enhance
		An action that is taken to increase the chance of the opportunity occurring.

	Ignore
		Opportunities that cannot be actively addressed through other opportunity response types can be ignored, with no special measures being taken to address them.

Escalation
	Risks can be escalated to NOIRLab Directorate or other program/services for their attention.

Related Response Plans
	Lists Response Plans associated with this risk.

Related Actions
	Lists Actions associated with this risk.

Residual Overall Impact
	This is an optional field to categorize the overall impact of the risk to the project after the response plan is in effect.

	It can increase the Impact Severity, as shown in this example risk.

	See :ref:`Risk-Impact-Table` for categories.

Residual Cost Impact
	Categorization of cost impact to the project after the response plan is in effect.

	For the Rubin Observatory, the annual budget of $70,000,000 will be used.

	See :ref:`Risk-Impact-Table` for categories.

Residual Likelihood
	Overall chance of risk being realized after the response plan is in effect.

	See :ref:`Likelihood-Table` for categories.

Residual Schedule Impact
	Categorization of schedule impact to the project after the response plan is in effect.

	Contact your department’s Associate Director to determine specifics about the schedule and critical path.

	See :ref:`Risk-Impact-Table` for categories.

Residual Impact Severity
	Automatically generated category based on ``Residual Overall Impact``, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.

	At a minimum, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` must be completed because the residual impact score will not include inputs from the :ref:`Breakdown-Risk-Initial-Impact` section.

	See :ref:`Risk-Impact-Table` for categories.

Residual Impact Score
	Automatically generated value based on ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.

Residual Likelihood Score
	Automatically generated value based on ``Residual Likelihood``.

Residual Probability
	Automatically generated value based on ``Residual Likelihood``.

Residual Risk Score
	Automatically generated category based on ``Residual Overall Impact``, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.


.. _Breakdown-Risk-Comments-History:

Risk comments, notify list and history
--------------------------------------

A field is available to include additional comments on the risk and its status.
Email notifications are possible and can be customized to project/program/service group needs to notify the appropriate internal stakeholders of ongoing changes, scheduled events and distribution of reports on necessary dates or recurring timeframes.
All changes are tracked by the "history trail" section to capture the history of modification by users and when the modification occurred.

.. figure:: /_static/Risk-Example-Comments-History.png
    :name: Risk-Example-Comments-History

    Risk comment, notification and history trail sections using an example risk.

Status Description
	Comments regarding the status and status changes.

Realized Risk Plan
	Comments regarding planning for if and when the risk becomes realized.

Conclusion
	Comments regarding the conclusion of a retired or depreciated risk.

Updates/Comments
	Comments can be added regarding the risk.
	These comments are logged once they are saved.

Notify List
	Section to include users to the risk's notify list.

History Trail
	Each change is logged ([16] in the shown example).
	Included is the user making the change, the nature of the change and the date/time the change was made.
	All modifications are recorded.


..
   Temporary placeholders.
   .. _Breakdown-Plan:
   
   Breakdown of a plan
   ===================
   
   
   .. _Breakdown-Action:
   
   Breakdown of an action
   ======================
   
   
.. _Breakdown-Risk-Tool-Tables:

Risk Tool Tables
================

.. include:: risk-tool-tables.inc