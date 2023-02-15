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

.. todo::
   Add responses and actions to this page.

.. This page explains and defines the fields associated with :ref:`risks <Breakdown-Risk>`, :ref:`plans <Breakdown-Plan>` and :ref:`actions <Breakdown-Action>`.

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
	``Rubin Operations``.

Risk ID
	Automatically generated unique identifier.

Risk Type
	``Threats`` or ``Opportunities``.

Status
	``Candidate``, ``Active``, ``Retire``, ``Realized``, or ``Depreciated``.

Risk Department
	Rubin Observatory Department which owns the risk and responsible for its management.

Risk Category; Sub Category
	Categorizes the risk using the information in :ref:`Risk-Category-Table`.
	Click the information button next to the field to display the information within the Risk Tool webapp.

Risk Title
	Short, descriptive title for the risk.

Risk Statement
	"IF-THEN" statement describing the risk.

The statement should present the possible risk event or condition ("if") and the potential outcome or consequences ("then").

Date Entered; Date Last Modified; Last Modified By
	Automatically generated and updated.

Share Risk Externally
	``Yes`` or ``No`` depending on if the risk is shared external to Rubin Observatory.

.. todo::
   Determine if this is external to project or external stakeholders.

Parent
	Automatically generated list of associated Parent Risks of a Child Risk.

``Parent Risks`` are considered a "headline risk" to allow management to drill down to the ``Child Risk(s)`` that are of concern.
Parent Risks are not assessed directly, and they inherit the risk level of the highest-level Child Risk.


.. _Breakdown-Risk-Initial-Impact:

Risk initial impact
-------------------

Risks are analyzed by the ``Cost Impact`` and ``Schedule Impact`` to Rubin Observatory, and the ``Likelihood`` for it to be realized.
These are categorized into five levels of severity, as defined in :ref:`Breakdown-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

The risk should first be analyzed under the initial condition of realization, i.e., before responses take effect.
The impact categorizations will automatically generate the :ref:`Risk Score <Breakdown-Risk-Score-Quantitative>` fields as the product of the impact and likelihood.

.. figure:: /_static/Risk-Example-Analyze-Risk-Impacts.png
    :name: Risk-Example-Analyze-Risk-Impacts

    Risk Impacts sections using an example risk.

Overall Impact
	Optional field to categorize the overall impact of the risk to Rubin Observatory before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

``Overall Impact`` can be used to increase the ``Impact Severity`` field in the :ref:`Risk Score <Breakdown-Risk-Score-Quantitative>`, as shown in this example (:numref:`Risk-Example-Analyze-Risk-Impacts` and :numref:`Risk-Example-Analyze-Risk-Score-and-Quantitative`).

Cost Impact
	Categorization of cost impact, relative to the Rubin Observatory ``FY Baseline`` operating budget of $70,000,000, before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

Cost impacts are categorized relative to the annual baseline, even though in practice the cost of the realized risk may be felt and/or accumulated over multiple years.

Schedule Impact
	Categorization of schedule impact, relative to the critical path of the Rubin Observatory's schedule (e.g., the data release cycle, the summit maintenance schedule, the start of operations, or the completion of the LSST survey) before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

You should discuss the specifics with your department's Associate Director to determine the schedule impact.
For example, some delays may have an inconsequential impact to the Observatory's operations if it can be absorbed into the data release cycle, while others may require extending the LSST survey or delaying a data release as an action if the risk was realized.
The latter affects the Observatory's operational critical path and crucial milestones --- these impacts are the most important ones to capture and accurately.

Likelihood
	Categorization of overall chance of risk being realized before any response plans take effect.

	See :ref:`Likelihood-Table` for categories.

Existential Risk
	``Yes`` or ``No`` if the risk is existential to NOIRLab.

You should make an initial assessment for the Rubin Observatory Risk and Opportunity Board to review, then the board will confirm if this is appropriate.

Schedule/Cost Impact Description
	Text fields to describe and comment on decision for impact categorizations.


.. _Breakdown-Risk-Score-Quantitative:

Risk score and quantitative analysis 
------------------------------------

.. todo::
   Determine if analyze risk quantitative section should only be initial impact calculation.

The fields under ``Risk Score`` are automatically generated based on input selections from :ref:`risk impacts <Breakdown-Risk-Initial-Impact>`.
These are categorized into five levels of severity, as defined in :ref:`Breakdown-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

The ``Analyze Risk Quantitative`` section will not affect values and categories; however, the section will record the impact justification and provide information needed to categorize the impacts.
In practice, you should assess and adjust the impact categorizations after completing the the ``Analyze Risk Quantitative`` section.

.. figure:: /_static/Risk-Example-Analyze-Risk-Score-and-Quantitative.png
    :name: Risk-Example-Analyze-Risk-Score-and-Quantitative

    Risk Score and Analysis Quantitative sections using an example risk.

Impact Severity
	Automatically generated category based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Impact Score
	Automatically generated value based on ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Likelihood Score
	Automatically generated value based on ``Likelihood``.

Probability
	Automatically generated value based on ``Likelihood``.

Initial Risk Score
	Automatically generated value based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Minimum Delay (Months); Maximum Delay (Months); Likely Delay (Months)
	Minimum, maximum and likely delay if risk is realized, in months (round to the nearest integer).

.. todo::
   Define formula for Expected Schedule Delay.

Expected Schedule Delay (Months)
	Automatically generated value based on ``Minimum Delay``, ``Maximum Delay`` and ``Likely Delay``.

Impact Time
	Date when realized risk would impact the schedule.

.. todo::
   Complete list of milestones.

Impacted Event/Milestone
	Event or milestone impacted by the realized risk.

This is important, so that the meaning of the schedule delay is clear.
Some examples include ``LSST Survey Start``, ``Data Release 1`` (DR1), ``DR2``, ``Year 1 Annual Maintenance`` and ``LSST Survey Finish``.

Basis of Estimate
	Reference to basis of estimate capturing impact of realized risk.

Minimum Cost (US Dollars); Maximum Cost (US Dollars); Likely Cost (US Dollars)
	Minimum, maximum and likely annual cost of realized risk.

Costs should be estimated as they would occur, i.e., on an approximate, time-averaged, annual basis over the likely time period of impact and in approximate then-year dollars.
Rubin Observatory needs to know how much funding to hold in reserve **each year** in order to address risks as they are realized.

Cost estimates need only be precise to the nearest $1,000,000, although higher precision is appreciated.
This resolution is chosen because the cost estimates are multiplied by the estimated likelihood, and the product is expected to be uncertain by at least a factor of two.

Expected Cost Impact
	Automatically generated value based on the following formula:

	``Minimum Cost`` + ``Likely Cost`` |times| 4 + ``Maximum Cost`` |divide| 6

Expected Monetary Value
	Automatically generated value based on the following formula:

	[``Minimum Cost`` + ``Likely Cost`` |times| 4 + ``Maximum Cost`` |divide| 6] |times| [(``Likelihood Score`` |times| 0.20) - 0.10]

Financial Provision
	This field is not used by Rubin Observatory.

Number of Possible Occurrences
	Number of potential occurrences this risk can be realized, as an integer.


.. _Breakdown-Risk-Residual-Impact:

Risk residual impact
--------------------

.. Use :ref:`Response Plans <Breakdown-Plan>` when section is ready.

After a risk is identified, response plans (also known as responses) are used to address it.
The ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` analyze the realized risk impact after the plan is activated.
These are categorized into five levels of severity, as defined in :ref:`Breakdown-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

Related Actions (also known as actions) are actions taken to implement a response plan if a risk is realized.
Actions can be associated with risk and/or responses.

The risk is analyzed under the condition of realization after the response plans take effect within this section
The impact categorizations will automatically generate the ``Residual Risk Score`` fields as the product of the impact and likelihood.

.. figure:: /_static/Risk-Example-Plans-Actions-Residual-Risk.png
    :name: Risk-Example-Plans-Actions-Residual-Risk

    Residual Risk Impacts, Response Plans and Related Actions sections using an example risk.

Plan Type
	Strategic process of controlling the identified risks via response plans.

:numref:`Response-Plan-Types` shows the four types of processes, and their implementation depends on if the risk is a threat or opportunity.
Note that a risk may still be realized after a response plan is implemented:
for example, the difference between mitigating or accepting a threat (or enhancing or ignoring an opportunity) before the risk is realized can be summarized as "do something" or "do nothing."

.. todo::
   Include order for plan type for opportunities.

Some risks may include multiple response plans.
In this case, specify the plan type of the costliest present --- for threats, the plan types in order of increasing costliness are: ``Accept`` (least cost), ``Transfer``, ``Avoid``, ``Mitigate`` (greatest cost).

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
	``Yes`` or ``No`` if the risks is escalated to NOIRLab Directorate or other program/services for their attention.

Related Response Plans
	Automatically generated list of response plans associated with this risk.

Related Actions
	Automatically generated list of actions associated with this risk.

Residual Overall Impact
	Optional field to categorize the overall impact of the risk to Rubin Observatory after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

``Residual Overall Impact`` can be used to increase the ``Residual Impact Severity`` field.

Residual Cost Impact
	Categorization of cost impact, relative to the Rubin Observatory ``FY Baseline`` operating budget of $70,000,000, after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

Cost impacts are categorized relative to the annual baseline, even though in practice the cost of the realized risk may be felt and/or accumulated over multiple years.

Residual Likelihood
	Categorization of overall chance of risk being realized after a response plan is in effect.

	See :ref:`Likelihood-Table` for categories.

Residual Schedule Impact
	Categorization of schedule impact, relative to the critical path of the Rubin Observatory's schedule (e.g., the data release cycle, the summit maintenance schedule, the start of operations, or the completion of the LSST survey) after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

You should discuss the specifics with your department's Associate Director to determine the schedule impact.
For example, some delays may have an inconsequential impact to the Observatory's operations if it can be absorbed into the data release cycle, while others may require extending the LSST survey or delaying a data release as an action if the risk was realized.
The latter affects the Observatory's operational critical path and crucial milestones --- these impacts are the most important ones to capture and accurately.

Residual Impact Severity
	Automatically generated category based on ``Residual Overall Impact``, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.

	See :ref:`Risk-Impact-Table` for categories.

You must include ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` because the residual impact scores will not include inputs from the :ref:`Breakdown-Risk-Initial-Impact` section.

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

A text field is available to include additional comments on the risk and its status.
Email notifications are possible and can be customized to project/program/service group needs to notify the appropriate internal stakeholders of ongoing changes, scheduled events and distribution of reports on necessary dates or recurring timeframes.
All changes are tracked by the ``History Trail`` section to capture the history of modification by users and when the modification occurred.

.. figure:: /_static/Risk-Example-Comments-History.png
    :name: Risk-Example-Comments-History

    Risk comment, notification and History Trail sections using an example risk.

Status Description
	Text field to describe and comment the status and status changes.

Realized Risk Plan
	Text field to describe and comment on planning for if and when the risk becomes realized.

Conclusion
	Text field to describe and comment on the conclusion of a retired or depreciated risk.

Updates/Comments
	Text field to describe and comment on updates.
	These comments are logged once they are saved; see "Nov 10 2022" entry in :numref:`Risk-Example-Comments-History`.

Notify List
	List of users on the Notify List (left) and tools to add/remove users (right) for the risk.

History Trail
	Log of all modifications to the risk, including user making the change, the nature of the change and the date/time the change was made; see entry "[16]" in :numref:`Risk-Example-Comments-History`.


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
